use std::io;
use std::process::Command;

fn main() {
    let mut choix = 1;

    println!("Bienvenue sur Automatik. Ici, vous pourrez exécuter différentes commandes amusantes ou utiles très simplement.");
    println!("Voulez vous : cleanez votre cache utilisateur (1), genérer le répertoire de votre dossier personnel coloré avec lolcat(requis)(2), lister tous les fihiers de votre répertoire personnel avec de la couleur(3) ou encore afficher les informations de votre système linux(4).");

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Erreur de lecture de l'entrée");
    choix = input.trim().parse().expect("Veuillez entrer un nombre valide");

    match choix {
        1 => {
            Command::new("rm")
                .arg("-r")
                .arg("~/.cache")
                .status()
                .expect("Échec de la suppression du cache");
        }
        2 => {
            Command::new("sh")
                .arg("-c")
                .arg("echo $HOME | lolcat")
                .status()
                .expect("Échec de l'affichage du répertoire personnel");
        }
        3 => {
            Command::new("sh")
                .arg("-c")
                .arg("ls -a ~ | lolcat")
                .status()
                .expect("Échec de la liste des fichiers");
        }
        4 => {
            Command::new("neofetch")
                .status()
                .expect("Échec de l'affichage des informations système");
        }
        _ => println!("Choix invalide"),
    }
}
