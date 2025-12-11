#include <java/applet/AppletStub.h>

#include <java/applet/AppletContext.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace applet {

$NamedAttribute AppletStub_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _AppletStub_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AppletStub_Attribute_var$0},
	{}
};

$MethodInfo _AppletStub_MethodInfo_[] = {
	{"appletResize", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAppletContext", "()Ljava/applet/AppletContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCodeBase", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentBase", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AppletStub_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.applet.AppletStub",
	nullptr,
	nullptr,
	nullptr,
	_AppletStub_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AppletStub_Annotations_
};

$Object* allocate$AppletStub($Class* clazz) {
	return $of($alloc(AppletStub));
}

$Class* AppletStub::load$($String* name, bool initialize) {
	$loadClass(AppletStub, name, initialize, &_AppletStub_ClassInfo_, allocate$AppletStub);
	return class$;
}

$Class* AppletStub::class$ = nullptr;

	} // applet
} // java