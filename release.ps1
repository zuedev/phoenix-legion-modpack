# store location of Arma 3 Tools PublisherCmd
$PublisherCMD = "C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\Publisher\PublisherCmd.exe"

Push-Location "modpacks\"

# iterate over all mod directories
foreach ($modDir in $modDirs) {
    # enter mod directory
    Push-Location $modDir.FullName

    # run HEMTT release if mod has a .hemtt/project.toml file
    if (Test-Path ".hemtt\project.toml") {
        Write-Host "Running HEMTT Release for $($modDir.Name)"
        & hemtt release --no-archive --expsqfc

        # use Arma 3 Tools to publish if mod has a steam\workshop_id.txt file
        if (Test-Path "steam\workshop_id.txt") {
            # read workshop id from file
            $workshopId = Get-Content "steam\workshop_id.txt"

            Write-Host "Running Arma 3 Tools PublisherCmd for $($modDir.Name)"
            & $PublisherCMD update /id:$workshopId /path:.hemttout\release\ /changeNote:"automated release"
        }
    }

    # return to mods directory
    Pop-Location
}

# return to root directory
Pop-Location