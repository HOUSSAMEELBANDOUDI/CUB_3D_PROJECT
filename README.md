# cub3D — 42 Project

A **raycasting engine** inspired by Wolfenstein 3D, built in C as part of the 42 school curriculum. Renders a 3D maze from a 2D map using raycasting techniques with the MiniLibX graphics library.

## Tech Stack

- **C**
- **MiniLibX** — graphics library
- **Libft** — custom C library
- **Makefile**
- **Math.h** — trigonometry for raycasting

## Features

- 3D rendering using raycasting
- Wall texture rendering (North, South, East, West)
- Floor and ceiling colors
- Map parsing from `.cub` files
- Player movement (WASD) and rotation (arrow keys)
- Collision detection
- Bonus: minimap, mouse rotation, doors, sprites

## How to Build & Run

```bash
make
./cub3d maps/map.cub
```

For bonus:
```bash
make bonus
./cub3d_bonus maps/map.cub
```

## Controls

| Key | Action |
|-----|--------|
| W/S | Move forward/backward |
| A/D | Strafe left/right |
| ←/→ | Rotate camera |
| ESC | Exit |

## Author

**Houssame El Bandoudi** — [GitHub](https://github.com/HOUSSAMEELBANDOUDI) | 42 Student (hel-band)
