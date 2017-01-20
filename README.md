# git_to_gantt

Converts git commits into Gantt diagram entries.
Uses [`libgit2`](https://libgit2.github.com/) to read the repository data and [`mermaid`](http://knsv.github.io/mermaid/) to show it.


## Build

Initialize the `libgit2` submodule and 

```sh
git submodule init 
git submodule update
./build.sh
```


## TODO

- [x] initial setup
- [ ] add `build.sh` file
- [ ] read repo data
- [ ] fill in template file
- [ ] generate diagram instructions
