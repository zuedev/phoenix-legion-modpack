# store location of Arma 3 Tools PublisherCmd
$PublisherCMD = "C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\Publisher\PublisherCmd.exe"

# run HEMTT release if mod has a .hemtt/project.toml file
if (Test-Path ".hemtt\project.toml") {
    hemtt release

    # use Arma 3 Tools to publish if mod has a steam\workshop_id.txt file
    if (Test-Path "steam\workshop_id.txt") {
        # read workshop id from file
        $workshopId = Get-Content "steam\workshop_id.txt"

        $PublisherCMD update /id:$workshopId /path:.hemttout\release\ /changeNote:"automated release"
    }
}