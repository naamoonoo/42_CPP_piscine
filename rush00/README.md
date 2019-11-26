# retro

retro is making a game looks like old battle arcade game named galaxy which spaceships are fighting in the space.
It is kind of simple 2D shooting game.

`OOP` is core concept of this project. Enemy and Player are simple object of `IMoveable`, and so other thing are too.

Libarary `ncurses` are used for this project.

[retro.en.pdf](/resources/rush00.en.pdf) is the task file to see the detailed instruction.

## Installation

Clone repository and then go into the created directory and run the following command:

```
make
```

## Usage

```
Usage: ./retro
```

### InPlay Usage

To join game as player2 press `f1`

| Player | Move | Shooting |
| :------------ | -----------: | -------------------: |
| Player 1 | ←→↑↓ | space |
| Player 2 | adws | f |

## Visualizer

Visualizer is made up of [ncurses](https://www.gnu.org/software/ncurses/) libraray.

![Visualizer](/rush00/resources/retro.gif)
