#
# Regular cron jobs for the automatik package.
#
0 4	* * *	root	[ -x /usr/bin/automatik_maintenance ] && /usr/bin/automatik_maintenance
