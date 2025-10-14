#include <java/applet/AppletContext.h>

#include <java/applet/Applet.h>
#include <java/applet/AudioClip.h>
#include <java/awt/Image.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Applet = ::java::applet::Applet;
using $AudioClip = ::java::applet::AudioClip;
using $Image = ::java::awt::Image;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace applet {

$NamedAttribute AppletContext_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _AppletContext_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AppletContext_Attribute_var$0},
	{}
};


$MethodInfo _AppletContext_MethodInfo_[] = {
	{"getApplet", "(Ljava/lang/String;)Ljava/applet/Applet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getApplets", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/applet/Applet;>;", $PUBLIC | $ABSTRACT},
	{"getAudioClip", "(Ljava/net/URL;)Ljava/applet/AudioClip;", nullptr, $PUBLIC | $ABSTRACT},
	{"getImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStreamKeys", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"setStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"showDocument", "(Ljava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"showDocument", "(Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"showStatus", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AppletContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.applet.AppletContext",
	nullptr,
	nullptr,
	nullptr,
	_AppletContext_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AppletContext_Annotations_
};

$Object* allocate$AppletContext($Class* clazz) {
	return $of($alloc(AppletContext));
}

$Class* AppletContext::load$($String* name, bool initialize) {
	$loadClass(AppletContext, name, initialize, &_AppletContext_ClassInfo_, allocate$AppletContext);
	return class$;
}

$Class* AppletContext::class$ = nullptr;

	} // applet
} // java