/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/auth/v1/authz_policy.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef SRC_PROTO_GRPC_AUTH_V1_AUTHZ_POLICY_PROTO_UPBDEFS_H_
#define SRC_PROTO_GRPC_AUTH_V1_AUTHZ_POLICY_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init src_proto_grpc_auth_v1_authz_policy_proto_upbdefinit;

UPB_INLINE const upb_msgdef *grpc_auth_v1_Peer_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_auth_v1_authz_policy_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.auth.v1.Peer");
}

UPB_INLINE const upb_msgdef *grpc_auth_v1_Header_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_auth_v1_authz_policy_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.auth.v1.Header");
}

UPB_INLINE const upb_msgdef *grpc_auth_v1_Request_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_auth_v1_authz_policy_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.auth.v1.Request");
}

UPB_INLINE const upb_msgdef *grpc_auth_v1_Rule_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_auth_v1_authz_policy_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.auth.v1.Rule");
}

UPB_INLINE const upb_msgdef *grpc_auth_v1_AuthorizationPolicy_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_auth_v1_authz_policy_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.auth.v1.AuthorizationPolicy");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* SRC_PROTO_GRPC_AUTH_V1_AUTHZ_POLICY_PROTO_UPBDEFS_H_ */
