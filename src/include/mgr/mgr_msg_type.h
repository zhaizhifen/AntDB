
/*
 * message type for manager and agent
 */

#ifndef MGR_MSG_TYPE_H
#define MGR_MSG_TYPE_H

#define AGT_MSG_MAX_LEN		(10 * 1024 * 1024)	/* 10MB */

#define AGT_MSG_COMMAND	'C'
#define AGT_MSG_ERROR	'E'
#define AGT_MSG_NOTICE	'N'
#define AGT_MSG_IDLE	'I'
#define AGT_MSG_RESULT	'M'		/* for AGT_MSG_COMMAND */
#define AGT_MSG_EXIT	'X'

/* command type */
#define AGT_MSG_CMD_GTM_START
typedef enum AgentCommand
{
	 AGT_CMD_GTM_INIT = 1
	,AGT_CMD_GTM_SLAVE_INIT
	,AGT_CMD_GTM_START_MASTER
	,AGT_CMD_GTM_START_SLAVE
	,AGT_CMD_GTM_STOP_MASTER
	,AGT_CMD_GTM_STOP_SLAVE
	,AGT_CMD_GTM_CLEAN
	,AGT_CMD_GTM_SLAVE_FAILOVER
	,AGT_CMD_AGTM_RESTART
	,AGT_CMD_CNDN_CNDN_INIT
	,AGT_CMD_CNDN_SLAVE_INIT
	,AGT_CMD_CN_RESTART
	,AGT_CMD_CN_START
	,AGT_CMD_CN_STOP
	,AGT_CMD_DN_START
	,AGT_CMD_DN_RESTART
	,AGT_CMD_DN_STOP
	,AGT_CMD_DN_FAILOVER
	,AGT_CMD_PSQL_CMD
	,AGT_CMD_CNDN_REFRESH_PGSQLCONF
	,AGT_CMD_CNDN_REFRESH_RECOVERCONF
	,AGT_CMD_CNDN_REFRESH_PGHBACONF
	,AGT_CMD_CNDN_ADD_PGHBACONF
	,AGT_CMD_CNDN_ALTER_PGHBACONF
	,AGT_CMD_CNDN_DELETE_PGHBACONF
	,AGT_CMD_CNDN_REFRESH_PGSQLCONF_RELOAD
	,AGT_CMD_CNDN_DELPARAM_PGSQLCONF_FORCE
	,AGT_CMD_CNDN_RENAME_RECOVERCONF
	,AGT_CMD_MONITOR_GETS_HOST_INFO
	,AGT_CMD_PGDUMPALL
	,AGT_CMD_RM
	,AGT_CMD_NODE_RELOAD
	,AGT_CMD_CLEAN_NODE
	,AGT_CMD_STOP_AGENT
	,AGT_CMD_SHOW_AGTM_PARAM
	,AGT_CMD_SHOW_CNDN_PARAM
	,AGT_CMD_GET_SQL_STRINGVALUES
	,AGT_CMD_GET_EXPLAIN_STRINGVALUES
	,AGT_CMD_GET_BATCH_JOB
	,AGT_CMD_CHECK_DIR_EXIST
	,AGT_CMD_PING_NODE
	,AGT_CMD_NODE_REWIND
}AgentCommand;

#endif /* MGR_MSG_TYPE_H */

