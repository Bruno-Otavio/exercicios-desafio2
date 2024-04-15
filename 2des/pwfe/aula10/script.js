const audio_player = document.querySelector("#audio-player");

const play_button = document.querySelector("#play-button");
const nex_button = document.querySelector("#nex-button");
const back_button = document.querySelector("#back-button");

let current_song = 0;

const play_music = () => {
    if (audio_player.paused) {
        audio_player.play();
    } else {
        audio_player.pause();
    }
}

const next_music = () => {
    
}
