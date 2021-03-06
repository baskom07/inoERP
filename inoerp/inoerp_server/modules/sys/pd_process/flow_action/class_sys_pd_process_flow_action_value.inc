<?php

class sys_pd_pflow_action_val extends dbObject {

 public static $table_name = "sys_pd_pflow_action_val";
 public static $primary_column = "sys_pd_pflow_action_val_id";
 public static $parent_primary_column = "sys_pd_process_flow_line_id";
 public static $key_column = "line_name";
 public static $module = "sys";
 public $field_a = [
  'sys_pd_pflow_action_val_id',
  'sys_pd_process_flow_action_id',
  'value_i',
  'comment_i',
  'action_user_id',
  'action_duration',
  'created_by',
  'creation_date',
  'last_update_by',
  'last_update_date',
 ];
 public $initial_search = [
  'sys_pd_process_flow_action_id',
 ];
 public $requiredField = [
  'sys_pd_process_flow_action_id',
  'value',
  'action_user_id',
 ];
 public $fields_inHeader_needsToBeInserted_inPOST = [
  "sys_pd_process_flow_header_id"
 ];
 public $pageTitle = " Process Flow Line Value"; //page Title
 public $sys_pd_pflow_action_val_id;
 public $sys_pd_process_flow_action_id;
 public $value_i;
 public $comment_i;
 public $action_user_id;
 public $action_duration;
 public $created_by;
 public $creation_date;
 public $last_update_by;
 public $last_update_date;

}

//end of path class
?>