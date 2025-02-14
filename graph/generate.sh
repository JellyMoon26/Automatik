cd ~/Automatik

git log --graph --oneline --all --decorate --pretty=format:'%h %d %s' > graph/graph.dot

cd graph

./git2dot --crunch --squash --svg graph.dot
