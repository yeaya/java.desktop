#include <com/sun/java/swing/plaf/windows/TMSchema.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _TMSchema_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TMSchema::*)()>(&TMSchema::init$))},
	{}
};

$InnerClassInfo _TMSchema_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.TMSchema$TypeEnum", "com.sun.java.swing.plaf.windows.TMSchema", "TypeEnum", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.windows.TMSchema$Prop", "com.sun.java.swing.plaf.windows.TMSchema", "Prop", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.windows.TMSchema$State", "com.sun.java.swing.plaf.windows.TMSchema", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.windows.TMSchema$Part", "com.sun.java.swing.plaf.windows.TMSchema", "Part", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.windows.TMSchema$Control", "com.sun.java.swing.plaf.windows.TMSchema", "Control", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TMSchema_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.TMSchema",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TMSchema_MethodInfo_,
	nullptr,
	nullptr,
	_TMSchema_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.TMSchema$TypeEnum,com.sun.java.swing.plaf.windows.TMSchema$Prop,com.sun.java.swing.plaf.windows.TMSchema$State,com.sun.java.swing.plaf.windows.TMSchema$Part,com.sun.java.swing.plaf.windows.TMSchema$Control"
};

$Object* allocate$TMSchema($Class* clazz) {
	return $of($alloc(TMSchema));
}

void TMSchema::init$() {
}

TMSchema::TMSchema() {
}

$Class* TMSchema::load$($String* name, bool initialize) {
	$loadClass(TMSchema, name, initialize, &_TMSchema_ClassInfo_, allocate$TMSchema);
	return class$;
}

$Class* TMSchema::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com