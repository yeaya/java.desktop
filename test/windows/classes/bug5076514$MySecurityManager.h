#ifndef _bug5076514$MySecurityManager_h_
#define _bug5076514$MySecurityManager_h_
//$ class bug5076514$MySecurityManager
//$ extends java.lang.SecurityManager

#include <java/lang/SecurityManager.h>

namespace java {
	namespace security {
		class Permission;
	}
}

class bug5076514$MySecurityManager : public ::java::lang::SecurityManager {
	$class(bug5076514$MySecurityManager, $NO_CLASS_INIT, ::java::lang::SecurityManager)
public:
	bug5076514$MySecurityManager();
	using ::java::lang::SecurityManager::checkPermission;
	void init$();
	virtual void checkPermission(::java::security::Permission* perm) override;
};

#endif // _bug5076514$MySecurityManager_h_