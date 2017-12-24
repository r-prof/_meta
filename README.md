# r-prof

This repository contains the code for all repositories of this organization. Development may temporarily switch to this repository if multiple repositories must be changed simultaneously. This fits the description of a [metarepo](http://notes.burke.libbey.me/metarepo/).

Unlike [tomono](https://github.com/unravelin/tomono), bidirectional synchronization to and from the individual repos is supported.

Each commit to the meta-repository is recorded in order of occurrence. This is different from other tools such as [mr](http://joeyh.name/code/mr/) or [meta](https://github.com/mateodelnorte/meta) which merely will apply the same Git command to all individual repositories.


## Getting started

- Clone this repository
- Run `./metatool populate`

## Importing a new repository

- Clone the repository into the `.many` directory
- Run `./metatool init`

## Synchronizing

- Run `./metatool sync`
    - Synchronization is currently always bidirectional, the expensive `git subtree push` is run in parallel

