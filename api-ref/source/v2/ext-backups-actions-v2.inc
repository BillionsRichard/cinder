.. -*- rst -*-

Backup actions (backups, action)
================================

Force-deletes a backup and reset status for a backup.


Force-delete backup
~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v2/{tenant_id}/backups/{backup_id}/action

Force-deletes a backup. Specify the ``os-force_delete`` action in the request body.

This operations deletes the backup and any backup data.

The backup driver returns the ``405`` status code if it does not
support this operation.

Normal response codes: 202

Error response codes: itemNotFound(404), badMethod(405)


Request
-------

.. rest_parameters:: parameters.yaml

   - os-force_delete: os-force_delete
   - tenant_id: tenant_id
   - backup_id: backup_id

Request Example
---------------

.. literalinclude:: ./samples/backup-force-delete-request.json
   :language: javascript



Reset backup's status
~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v2/{tenant_id}/backups/{backup_id}/action

Reset a backup's status. Specify the ``os-reset_status`` action in the request body.

Normal response codes: 202

Error response codes: badRequest(400), itemNotFound(404)


Request
-------

.. rest_parameters:: parameters.yaml

   - status: status_7
   - os-reset_status: os-reset_status
   - tenant_id: tenant_id
   - backup_id: backup_id

Request Example
---------------

.. literalinclude:: ./samples/backup-reset-status-request.json
   :language: javascript

