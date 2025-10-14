#include <java/beans/BeansAppletStub.h>

#include <java/applet/Applet.h>
#include <java/applet/AppletContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $Applet = ::java::applet::Applet;
using $AppletContext = ::java::applet::AppletContext;
using $AppletStub = ::java::applet::AppletStub;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $URL = ::java::net::URL;

namespace java {
	namespace beans {

$NamedAttribute BeansAppletStub_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _BeansAppletStub_Annotations_[] = {
	{"Ljava/lang/Deprecated;", BeansAppletStub_Attribute_var$0},
	{}
};


$FieldInfo _BeansAppletStub_FieldInfo_[] = {
	{"active", "Z", nullptr, $TRANSIENT, $field(BeansAppletStub, active)},
	{"target", "Ljava/applet/Applet;", nullptr, $TRANSIENT, $field(BeansAppletStub, target)},
	{"context", "Ljava/applet/AppletContext;", nullptr, $TRANSIENT, $field(BeansAppletStub, context)},
	{"codeBase", "Ljava/net/URL;", nullptr, $TRANSIENT, $field(BeansAppletStub, codeBase)},
	{"docBase", "Ljava/net/URL;", nullptr, $TRANSIENT, $field(BeansAppletStub, docBase)},
	{}
};

$MethodInfo _BeansAppletStub_MethodInfo_[] = {
	{"<init>", "(Ljava/applet/Applet;Ljava/applet/AppletContext;Ljava/net/URL;Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(BeansAppletStub::*)($Applet*,$AppletContext*,$URL*,$URL*)>(&BeansAppletStub::init$))},
	{"appletResize", "(II)V", nullptr, $PUBLIC},
	{"getAppletContext", "()Ljava/applet/AppletContext;", nullptr, $PUBLIC},
	{"getCodeBase", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getDocumentBase", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BeansAppletStub_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.BeansAppletStub",
	"java.lang.Object",
	"java.applet.AppletStub",
	_BeansAppletStub_FieldInfo_,
	_BeansAppletStub_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_BeansAppletStub_Annotations_
};

$Object* allocate$BeansAppletStub($Class* clazz) {
	return $of($alloc(BeansAppletStub));
}

void BeansAppletStub::init$($Applet* target, $AppletContext* context, $URL* codeBase, $URL* docBase) {
	$set(this, target, target);
	$set(this, context, context);
	$set(this, codeBase, codeBase);
	$set(this, docBase, docBase);
}

bool BeansAppletStub::isActive() {
	return this->active;
}

$URL* BeansAppletStub::getDocumentBase() {
	return this->docBase;
}

$URL* BeansAppletStub::getCodeBase() {
	return this->codeBase;
}

$String* BeansAppletStub::getParameter($String* name) {
	return nullptr;
}

$AppletContext* BeansAppletStub::getAppletContext() {
	return this->context;
}

void BeansAppletStub::appletResize(int32_t width, int32_t height) {
}

BeansAppletStub::BeansAppletStub() {
}

$Class* BeansAppletStub::load$($String* name, bool initialize) {
	$loadClass(BeansAppletStub, name, initialize, &_BeansAppletStub_ClassInfo_, allocate$BeansAppletStub);
	return class$;
}

$Class* BeansAppletStub::class$ = nullptr;

	} // beans
} // java