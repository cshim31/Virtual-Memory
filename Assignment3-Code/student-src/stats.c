#include "paging.h"
#include "stats.h"

/* The stats. See the definition in stats.h. */
stats_t stats;

/*  --------------------------------- PROBLEM 9 --------------------------------------
    Calculate any remaining statistics to print out.

    You will need to include code to increment many of these stats in
    the functions you have written for other parts of the project.

    Use this function to calculate any remaining stats, such as the
    average access time (AAT).

    You may find the #defines in the stats.h file useful.
    -----------------------------------------------------------------------------------
*/
void compute_stats() {
    stats.accesses = stats.reads + stats.writes;
    stats.aat = (MEMORY_READ_TIME * stats.accesses + DISK_PAGE_READ_TIME * stats.page_faults + DISK_PAGE_WRITE_TIME * stats.writebacks) / stats.accesses;
    printf("---------------------------------\n");
    printf("Access : %d\n",stats.accesses);
    printf("Reads : %d\n", stats.reads);
    printf("Writes : %d\n",stats.writes);
    printf("Page faults : %d\n",stats.page_faults);
    printf("Writebacks : %d\n",stats.writebacks);
    printf("Average Access Time : %f\n",stats.writebacks);
    printf("---------------------------------\n");
}
