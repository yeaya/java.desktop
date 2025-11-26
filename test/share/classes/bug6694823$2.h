#ifndef _bug6694823$2_h_
#define _bug6694823$2_h_
//$ class bug6694823$2
//$ extends java.lang.SecurityManager

#include <java/lang/SecurityManager.h>

namespace java {
	namespace security {
		class Permission;
	}
}

class bug6694823$2 : public ::java::lang::SecurityManager {
	$class(bug6694823$2, $NO_CLASS_INIT, ::java::lang::SecurityManager)
public:
	bug6694823$2();
	using ::java::lang::SecurityManager::checkPermission;
	void init$();
	virtual void checkPermission(::java::security::Permission* perm) override;
};

#endif // _bug6694823$2_h_