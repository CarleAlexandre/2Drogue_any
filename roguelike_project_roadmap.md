# 2D Roguelike with Dual Game Loops: Roadmap & Deadline

This document outlines a detailed plan to create a simple 2D roguelike in C using raylib, featuring two distinct game loops: defending your base against hordes and pillaging a dungeon.

---

## 1. Realistic Deadline Estimate

- **Overall Estimate:** **80–120 hours** of focused development time
  *(This can be spread over several weeks if you’re working part time.)*

> **Note:**
> If you’re new to C/game development or raylib, you may want to extend this timeline by an additional 50% or more to cover learning curves and extra debugging.

---

## 2. Roadmap / To-Do List

### A. Pre-Production and Planning (8–12 hours)
- **Concept Design:**
  - Define the core mechanics for both game loops:
    - **Base Defense Mode:** Determine horde attack wave system, enemy behavior, and defensive structure mechanics.
    - **Dungeon Pillaging Mode:** Decide on dungeon layout, exploration dynamics, enemy encounters, and reward systems.
  - Sketch out game flow diagrams and state transitions between modes.
- **Feature List & Scope:**
  - Create a brief design document outlining gameplay, UI, and any score/progression systems.
  - Prioritize features (MVP vs. additional polish) to ensure core gameplay is functional.
- **Tool Setup:**
  - Install and configure raylib.
  - Set up your development environment (IDE, version control, build scripts).

### B. Prototyping Basic Framework (15–20 hours)
- **Project Setup:**
  - Initialize a basic C project structure and integrate raylib.
  - Create a main game loop with a game state manager to switch between modes.
- **Basic Game Loop Implementation:**
  - Implement a splash screen or main menu for mode selection.
  - Add stubs for each mode (base defense and dungeon) to verify mode switching.
- **Input and Rendering:**
  - Set up event handling using raylib for keyboard/mouse input.
  - Render simple shapes or sprites as placeholders for the player, enemies, and bases.

### C. Base Defense Mode Development (25–30 hours)
- **Game Mechanics:**
  - Code enemy spawning and implement wave mechanics for base defense.
  - Develop basic AI for enemy movement and targeting the base.
- **Player & Base Interactions:**
  - Create defensive structures or player-controlled defenses.
  - Implement collision detection between enemies and the base.
- **Visual Feedback:**
  - Display base health/integrity.
  - Include simple animations or state feedback (damage effects, score updates).
- **Testing and Iteration:**
  - Continuously test and tweak enemy behavior, spawn rates, and difficulty.

### D. Dungeon Pillaging Mode Development (25–30 hours)
- **Dungeon Generation:**
  - Design a simple procedural (or pre-defined) dungeon layout.
  - Implement room transitions, corridors, or tile-based map structure.
- **Player Mechanics:**
  - Code player movement, attacks, and possibly a simple inventory or item system.
  - Define enemy encounters with a basic combat system and AI.
- **Environment Interactions:**
  - Add interactive elements such as doors, traps, or treasure chests.
  - Implement transitions between rooms or levels.
- **Basic Story/Progression Elements:**
  - Integrate objectives like reaching a goal or collecting treasures.
  - Consider power-ups or enhancements to influence later base defense rounds.
- **Testing and Iteration:**
  - Playtest exploration, tweak enemy difficulty, and adjust dungeon layouts to ensure engagement.

### E. Integration, Polish, and Debugging (10–20 hours)
- **Integration:**
  - Seamlessly connect the two modes so that players can transition between them.
  - Implement transitions (e.g., carrying over score or narrative cues).
- **Polish:**
  - Refine graphics and animations (using temporary assets if necessary).
  - Add sound effects and background music for an improved player experience.
- **Debugging & Optimization:**
  - Thoroughly playtest for bugs and balance gameplay.
  - Optimize performance, particularly when managing multiple on-screen entities.
- **Final Touches:**
  - Develop a simple scoring or progression system, if desired.
  - Implement a basic UI for health, score, and game mode transitions.

### F. Buffer and Extra Time
- **Extra Time (Optional):** Reserve an additional **10–20%** of the total planned hours for unforeseen challenges or potential extra features.

---

## 3. Final Considerations

- **Iteration:** Game development is iterative. Be prepared to revisit and refine early stages as new challenges or ideas arise.
- **Scope Management:** Focus initially on a minimal viable product (MVP) that covers both game modes. Additional features can be added once core gameplay is solid.
- **Learning Curve:** If you are less experienced with raylib or game development in C, consider using online tutorials and community forums for additional guidance.

Good luck with your project!
