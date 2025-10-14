#include <java/beans/XMLDecoder$1.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <java/beans/XMLDecoder.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $XMLDecoder = ::java::beans::XMLDecoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InputSource = ::org::xml::sax::InputSource;

namespace java {
	namespace beans {

$FieldInfo _XMLDecoder$1_FieldInfo_[] = {
	{"this$0", "Ljava/beans/XMLDecoder;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDecoder$1, this$0)},
	{}
};

$MethodInfo _XMLDecoder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/XMLDecoder;)V", nullptr, 0, $method(static_cast<void(XMLDecoder$1::*)($XMLDecoder*)>(&XMLDecoder$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XMLDecoder$1_EnclosingMethodInfo_ = {
	"java.beans.XMLDecoder",
	"parsingComplete",
	"()Z"
};

$InnerClassInfo _XMLDecoder$1_InnerClassesInfo_[] = {
	{"java.beans.XMLDecoder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLDecoder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.XMLDecoder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XMLDecoder$1_FieldInfo_,
	_XMLDecoder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_XMLDecoder$1_EnclosingMethodInfo_,
	_XMLDecoder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.XMLDecoder"
};

$Object* allocate$XMLDecoder$1($Class* clazz) {
	return $of($alloc(XMLDecoder$1));
}

void XMLDecoder$1::init$($XMLDecoder* this$0) {
	$set(this, this$0, this$0);
}

$Object* XMLDecoder$1::run() {
	$nc(this->this$0->handler)->parse(this->this$0->input);
	return $of(nullptr);
}

XMLDecoder$1::XMLDecoder$1() {
}

$Class* XMLDecoder$1::load$($String* name, bool initialize) {
	$loadClass(XMLDecoder$1, name, initialize, &_XMLDecoder$1_ClassInfo_, allocate$XMLDecoder$1);
	return class$;
}

$Class* XMLDecoder$1::class$ = nullptr;

	} // beans
} // java