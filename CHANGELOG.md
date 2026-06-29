# Changelog

All notable changes to this fork compared to `ursl/tessie` will be documented in this file.

## 20260629
### Changed
- Rebased on upstream tag `2026/06/26-03`
- Updated 'fix' for `MAX_TEMP` w/o flowswitch to `40.` as `MAX_TEMP` updated to `40.` in upstream 86895d (20250703)

### Added
- Simple `build.sh` script to automate tessie build process.

## 20251024
### Changed
- Rebased on upstream tag `2025/10-22/03`

## 20250604
### Changed
- Rebased on upstream tag `2025/05/23-01`

## 20250522
### Changed
- Rebased on upstream tag `2025/05/14-02`

## 20250319
### Changed
- Rebased on upstream tag `2025/01/30-01`

## 20241016
### Added
- CHANGELOG.md

### Changed
- Updated `README.md`
- Updated `.gitignore` to exclude generated and dependency files

### Fixed
- Changed `MAX_TEMP` value in `/src/driveHardware.hh` from `25.` to `50.`
