.. -*- rst -*-

Hosts extension (os-hosts)
====================================

Administrators only, depending on policy settings.

Lists, shows hosts.


List all hosts
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v2/{admin_tenant_id}/os-hosts

Lists all hosts summary info that is not disabled.

Normal response codes: 200

Request
-------

.. rest_parameters:: parameters.yaml

   - admin_tenant_id: admin_tenant_id


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - service-status: service_status
   - service: host_service
   - zone: availability_zone_3
   - service-state: service_state
   - host_name: hostname
   - last-update: updated_at

Response Example
----------------

.. literalinclude:: ./samples/hosts-list-response.json
   :language: javascript

Show Host Details
~~~~~~~~~~~~~~~~~

.. rest_method:: GET /v2/{admin_tenant_id}/os-hosts/{host_name}

Shows volume and snapshot details for a cinder-volume host.

*Note:* This API is meant specifically for cinder-volume hosts only.
It is not valid against other Cinder service hosts or hosts where the
cinder-volume service has been disabled.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

  - admin_tenant_id: admin_tenant_id
  - host_name: hostname

Response
--------

.. rest_parameters:: parameters.yaml

  - volume_count: total_count
  - total_volume_gb: totalGigabytesUsed
  - total_snapshot_gb: totalSnapshotsUsed
  - project: admin_tenant_id
  - host: host
  - snapshot_count: totalSnapshotsUsed

**Example Show Host Details**

.. literalinclude:: ./samples/hosts-get-response.json
   :language: javascript
