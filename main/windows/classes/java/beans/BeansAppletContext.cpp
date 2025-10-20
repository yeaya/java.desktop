#include <java/beans/BeansAppletContext.h>

#include <java/applet/Applet.h>
#include <java/applet/AudioClip.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageProducer.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Applet = ::java::applet::Applet;
using $AppletContext = ::java::applet::AppletContext;
using $AudioClip = ::java::applet::AudioClip;
using $Component = ::java::awt::Component;
using $Image = ::java::awt::Image;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;

namespace java {
	namespace beans {

$NamedAttribute BeansAppletContext_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _BeansAppletContext_Annotations_[] = {
	{"Ljava/lang/Deprecated;", BeansAppletContext_Attribute_var$0},
	{}
};


$FieldInfo _BeansAppletContext_FieldInfo_[] = {
	{"target", "Ljava/applet/Applet;", nullptr, 0, $field(BeansAppletContext, target)},
	{"imageCache", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/net/URL;Ljava/lang/Object;>;", 0, $field(BeansAppletContext, imageCache)},
	{}
};

$MethodInfo _BeansAppletContext_MethodInfo_[] = {
	{"<init>", "(Ljava/applet/Applet;)V", nullptr, 0, $method(static_cast<void(BeansAppletContext::*)($Applet*)>(&BeansAppletContext::init$))},
	{"getApplet", "(Ljava/lang/String;)Ljava/applet/Applet;", nullptr, $PUBLIC},
	{"getApplets", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/applet/Applet;>;", $PUBLIC},
	{"getAudioClip", "(Ljava/net/URL;)Ljava/applet/AudioClip;", nullptr, $PUBLIC},
	{"getImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getStreamKeys", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{"setStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"showDocument", "(Ljava/net/URL;)V", nullptr, $PUBLIC},
	{"showDocument", "(Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"showStatus", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BeansAppletContext_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.BeansAppletContext",
	"java.lang.Object",
	"java.applet.AppletContext",
	_BeansAppletContext_FieldInfo_,
	_BeansAppletContext_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_BeansAppletContext_Annotations_
};

$Object* allocate$BeansAppletContext($Class* clazz) {
	return $of($alloc(BeansAppletContext));
}

void BeansAppletContext::init$($Applet* target) {
	$set(this, imageCache, $new($Hashtable));
	$set(this, target, target);
}

$AudioClip* BeansAppletContext::getAudioClip($URL* url) {
	try {
		return $cast($AudioClip, $nc(url)->getContent());
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$Image* BeansAppletContext::getImage($URL* url) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Object, o, $nc(this->imageCache)->get(url));
		if (o != nullptr) {
			return $cast($Image, o);
		}
		try {
			$assign(o, $nc(url)->getContent());
			if (o == nullptr) {
				return nullptr;
			}
			if ($instanceOf($Image, o)) {
				$nc(this->imageCache)->put(url, o);
				return $cast($Image, o);
			}
			$var($Image, img, $nc(this->target)->createImage($cast($ImageProducer, o)));
			$nc(this->imageCache)->put(url, img);
			return img;
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			return nullptr;
		}
	}
	$shouldNotReachHere();
}

$Applet* BeansAppletContext::getApplet($String* name) {
	return nullptr;
}

$Enumeration* BeansAppletContext::getApplets() {
	$var($Vector, applets, $new($Vector));
	applets->addElement(this->target);
	return applets->elements();
}

void BeansAppletContext::showDocument($URL* url) {
}

void BeansAppletContext::showDocument($URL* url, $String* target) {
}

void BeansAppletContext::showStatus($String* status) {
}

void BeansAppletContext::setStream($String* key, $InputStream* stream) {
}

$InputStream* BeansAppletContext::getStream($String* key) {
	return nullptr;
}

$Iterator* BeansAppletContext::getStreamKeys() {
	return nullptr;
}

BeansAppletContext::BeansAppletContext() {
}

$Class* BeansAppletContext::load$($String* name, bool initialize) {
	$loadClass(BeansAppletContext, name, initialize, &_BeansAppletContext_ClassInfo_, allocate$BeansAppletContext);
	return class$;
}

$Class* BeansAppletContext::class$ = nullptr;

	} // beans
} // java