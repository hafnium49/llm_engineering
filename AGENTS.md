# Repository Guidelines

## Project Structure & Module Organization
- Source of truth: weekly modules in `week1/` … `week8/`.
- Each week contains notebooks like `dayN.ipynb` and `weekN EXERCISE.ipynb`.
- Put your work in `weekX/community-contributions/`. For multi-file entries, create a subfolder with `README.md` and optional `requirements.txt`.
- Root utilities: `diagnostics.py` (env checks), `.env` (local secrets), `environment.yml` and `requirements.txt` (deps), `SETUP-*.md` (setup guides).

## Build, Test, and Development Commands
- Conda (recommended): `conda env create -f environment.yml && conda activate llms`
- Virtualenv (alternative): `python -m venv .venv && source .venv/bin/activate && pip install -r requirements.txt`
- Launch notebooks: `jupyter lab` (or `jupyter notebook`)
- Verify setup: `python diagnostics.py`
- Clear large outputs before commit (optional): `jupyter nbconvert --clear-output --inplace your.ipynb`

## Coding Style & Naming Conventions
- Python: 4-space indent, `snake_case` for files, functions, and variables.
- Notebooks: name as `dayN.ipynb` or a clear, descriptive title; keep a “Setup” cell first for imports and env loading.
- Contributions: small assets only; for larger projects, use a folder `weekX/community-contributions/<project_name>/`.
- Linting (optional but encouraged): Black + isort locally before submitting.

## Testing Guidelines
- Notebooks should run top-to-bottom without errors (Kernel → Restart & Run All).
- Include minimal repro steps in a top cell or `README.md` for subfolders.
- If using external APIs, support local `.env` via `python-dotenv` and document required keys.

## Commit & Pull Request Guidelines
- Commits: prefer Conventional Commits (`feat:`, `fix:`, `docs:`) seen in history; keep changes scoped.
- PRs must include: purpose, week/day context (e.g., “Week2 Day3”), instructions to run, and screenshots/GIFs when helpful.
- Place files correctly (e.g., `week3/community-contributions/...`). Avoid committing credentials, large media, or unnecessary checkpoints.

## Security & Configuration Tips
- Store keys in `.env` (do not commit). Example: `OPENAI_API_KEY=sk-...`.
- To use local models: `OpenAI(base_url="http://localhost:11434/v1", api_key="ollama")` and swap model names (e.g., `gpt-4o-mini` → `llama3.2`).
- Keep notebooks lightweight; prefer links over large binaries. Use `.gitignore` for transient files and `.venv/`.
