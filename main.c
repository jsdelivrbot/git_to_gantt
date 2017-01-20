// Riccardo Miccini - 2017

#include <stdio.h>
#include "libgit2/include/git2.h"

int main(int argc, char const *argv[]) {
	int error = 0;

	// TODO read repo commit history and generate .md file, then conver it using mermaid
	// featueres:
	//  - bundle commits by dates
	// libgit2 refs https://libgit2.github.com/docs/guides/101-samples/
	// mermaid refs https://knsv.github.io/mermaid/#gant-diagrams

	// TODO check argc and print help
	const char * repo_path = argv[1];

	// init git library
	git_libgit2_init();

	// check repository
	error = git_repository_open_ext(NULL, repo_path, GIT_REPOSITORY_OPEN_NO_SEARCH, NULL);
	if (error < 0) {
		const git_error *e = giterr_last();
		printf("Error while opening repository \"%s\", reported:\n", repo_path);
		printf("Error %d/%d: %s\n", error, e->klass, e->message);
		exit(error);
	}

	// open repo
	git_repository *repo = NULL;
	error = git_repository_open(&repo, repo_path);



	// free resources
	git_repository_free(repo);
	git_libgit2_shutdown();
	
	return 0;
}
