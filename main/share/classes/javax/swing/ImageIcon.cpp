#include <javax/swing/ImageIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/MediaTracker.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/MemoryImageSource.h>
#include <java/awt/image/PixelGrabber.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/net/URL.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon$1.h>
#include <javax/swing/ImageIcon$2.h>
#include <javax/swing/ImageIcon$3.h>
#include <javax/swing/ImageIcon$AccessibleImageIcon.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef ABORT
#undef TRACKER_KEY

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $MediaTracker = ::java::awt::MediaTracker;
using $Toolkit = ::java::awt::Toolkit;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $MemoryImageSource = ::java::awt::image::MemoryImageSource;
using $PixelGrabber = ::java::awt::image::PixelGrabber;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $URL = ::java::net::URL;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $ImageIcon$1 = ::javax::swing::ImageIcon$1;
using $ImageIcon$2 = ::javax::swing::ImageIcon$2;
using $ImageIcon$3 = ::javax::swing::ImageIcon$3;
using $ImageIcon$AccessibleImageIcon = ::javax::swing::ImageIcon$AccessibleImageIcon;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {

$CompoundAttribute _ImageIcon_FieldAnnotations_component[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ImageIcon_FieldAnnotations_tracker[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$Attribute ImageIcon_Attribute_var$1[] = {
	{'s', "description"},
	{'-'}
};

$NamedAttribute ImageIcon_Attribute_var$0[] = {
	{"value", '[', ImageIcon_Attribute_var$1},
	{}
};

$CompoundAttribute _ImageIcon_MethodAnnotations_init$1[] = {
	{"Ljava/beans/ConstructorProperties;", ImageIcon_Attribute_var$0},
	{}
};

$NamedAttribute ImageIcon_Attribute_var$2[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The AccessibleContext associated with this ImageIcon."},
	{}
};

$CompoundAttribute _ImageIcon_MethodAnnotations_getAccessibleContext10[] = {
	{"Ljava/beans/BeanProperty;", ImageIcon_Attribute_var$2},
	{}
};

$CompoundAttribute _ImageIcon_MethodAnnotations_getImage14[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _ImageIcon_MethodAnnotations_getImageObserver16[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$FieldInfo _ImageIcon_FieldInfo_[] = {
	{"filename", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(ImageIcon, filename)},
	{"location", "Ljava/net/URL;", nullptr, $PRIVATE | $TRANSIENT, $field(ImageIcon, location)},
	{"image", "Ljava/awt/Image;", nullptr, $TRANSIENT, $field(ImageIcon, image)},
	{"loadStatus", "I", nullptr, $TRANSIENT, $field(ImageIcon, loadStatus)},
	{"imageObserver", "Ljava/awt/image/ImageObserver;", nullptr, 0, $field(ImageIcon, imageObserver)},
	{"description", "Ljava/lang/String;", nullptr, 0, $field(ImageIcon, description)},
	{"component", "Ljava/awt/Component;", nullptr, $PROTECTED | $STATIC | $FINAL | $DEPRECATED, $staticField(ImageIcon, component), _ImageIcon_FieldAnnotations_component},
	{"tracker", "Ljava/awt/MediaTracker;", nullptr, $PROTECTED | $STATIC | $FINAL | $DEPRECATED, $staticField(ImageIcon, tracker), _ImageIcon_FieldAnnotations_tracker},
	{"mediaTrackerID", "I", nullptr, $PRIVATE | $STATIC, $staticField(ImageIcon, mediaTrackerID)},
	{"TRACKER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageIcon, TRACKER_KEY)},
	{"width", "I", nullptr, 0, $field(ImageIcon, width)},
	{"height", "I", nullptr, 0, $field(ImageIcon, height)},
	{"accessibleContext", "Ljavax/swing/ImageIcon$AccessibleImageIcon;", nullptr, $PRIVATE, $field(ImageIcon, accessibleContext)},
	{}
};

$MethodInfo _ImageIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)($String*,$String*)>(&ImageIcon::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)($String*)>(&ImageIcon::init$)), nullptr, nullptr, _ImageIcon_MethodAnnotations_init$1},
	{"<init>", "(Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)($URL*,$String*)>(&ImageIcon::init$))},
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)($URL*)>(&ImageIcon::init$))},
	{"<init>", "(Ljava/awt/Image;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)($Image*,$String*)>(&ImageIcon::init$))},
	{"<init>", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)($Image*)>(&ImageIcon::init$))},
	{"<init>", "([BLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)($bytes*,$String*)>(&ImageIcon::init$))},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)($bytes*)>(&ImageIcon::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageIcon::*)()>(&ImageIcon::init$))},
	{"createNoPermsComponent", "()Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)()>(&ImageIcon::createNoPermsComponent))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ImageIcon_MethodAnnotations_getAccessibleContext10},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ImageIcon_MethodAnnotations_getImage14},
	{"getImageLoadStatus", "()I", nullptr, $PUBLIC},
	{"getImageObserver", "()Ljava/awt/image/ImageObserver;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ImageIcon_MethodAnnotations_getImageObserver16},
	{"getNextID", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ImageIcon::*)()>(&ImageIcon::getNextID))},
	{"getTracker", "()Ljava/awt/MediaTracker;", nullptr, $PRIVATE, $method(static_cast<$MediaTracker*(ImageIcon::*)()>(&ImageIcon::getTracker))},
	{"loadImage", "(Ljava/awt/Image;)V", nullptr, $PROTECTED},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageIcon::*)($ObjectInputStream*)>(&ImageIcon::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"setDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setImageObserver", "(Ljava/awt/image/ImageObserver;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageIcon::*)($ObjectOutputStream*)>(&ImageIcon::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ImageIcon_InnerClassesInfo_[] = {
	{"javax.swing.ImageIcon$AccessibleImageIcon", "javax.swing.ImageIcon", "AccessibleImageIcon", $PROTECTED},
	{"javax.swing.ImageIcon$3", nullptr, nullptr, 0},
	{"javax.swing.ImageIcon$2", nullptr, nullptr, 0},
	{"javax.swing.ImageIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ImageIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable,javax.accessibility.Accessible",
	_ImageIcon_FieldInfo_,
	_ImageIcon_MethodInfo_,
	nullptr,
	nullptr,
	_ImageIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.ImageIcon$AccessibleImageIcon,javax.swing.ImageIcon$3,javax.swing.ImageIcon$2,javax.swing.ImageIcon$2$1,javax.swing.ImageIcon$1"
};

$Object* allocate$ImageIcon($Class* clazz) {
	return $of($alloc(ImageIcon));
}

int32_t ImageIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool ImageIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* ImageIcon::clone() {
	 return this->$Icon::clone();
}

void ImageIcon::finalize() {
	this->$Icon::finalize();
}

$Component* ImageIcon::component = nullptr;
$MediaTracker* ImageIcon::tracker = nullptr;
int32_t ImageIcon::mediaTrackerID = 0;
$Object* ImageIcon::TRACKER_KEY = nullptr;

$Component* ImageIcon::createNoPermsComponent() {
	$init(ImageIcon);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, var$0, static_cast<$PrivilegedAction*>($new($ImageIcon$2)));
	return $cast($Component, $AccessController::doPrivileged(var$0, $$new($AccessControlContext, $$new($ProtectionDomainArray, {$$new($ProtectionDomain, nullptr, nullptr)}))));
}

void ImageIcon::init$($String* filename, $String* description) {
	this->loadStatus = 0;
	$set(this, description, nullptr);
	this->width = -1;
	this->height = -1;
	$set(this, accessibleContext, nullptr);
	$set(this, image, $nc($($Toolkit::getDefaultToolkit()))->getImage(filename));
	if (this->image == nullptr) {
		return;
	}
	$set(this, filename, filename);
	$set(this, description, description);
	loadImage(this->image);
}

void ImageIcon::init$($String* filename) {
	ImageIcon::init$(filename, filename);
}

void ImageIcon::init$($URL* location, $String* description) {
	this->loadStatus = 0;
	$set(this, description, nullptr);
	this->width = -1;
	this->height = -1;
	$set(this, accessibleContext, nullptr);
	$set(this, image, $nc($($Toolkit::getDefaultToolkit()))->getImage(location));
	if (this->image == nullptr) {
		return;
	}
	$set(this, location, location);
	$set(this, description, description);
	loadImage(this->image);
}

void ImageIcon::init$($URL* location) {
	ImageIcon::init$(location, $($nc(location)->toExternalForm()));
}

void ImageIcon::init$($Image* image, $String* description) {
	ImageIcon::init$(image);
	$set(this, description, description);
}

void ImageIcon::init$($Image* image) {
	this->loadStatus = 0;
	$set(this, description, nullptr);
	this->width = -1;
	this->height = -1;
	$set(this, accessibleContext, nullptr);
	$set(this, image, image);
	$var($Object, o, $nc(image)->getProperty("comment"_s, this->imageObserver));
	if ($instanceOf($String, o)) {
		$set(this, description, $cast($String, o));
	}
	loadImage(image);
}

void ImageIcon::init$($bytes* imageData, $String* description) {
	this->loadStatus = 0;
	$set(this, description, nullptr);
	this->width = -1;
	this->height = -1;
	$set(this, accessibleContext, nullptr);
	$set(this, image, $nc($($Toolkit::getDefaultToolkit()))->createImage(imageData));
	if (this->image == nullptr) {
		return;
	}
	$set(this, description, description);
	loadImage(this->image);
}

void ImageIcon::init$($bytes* imageData) {
	$useLocalCurrentObjectStackCache();
	this->loadStatus = 0;
	$set(this, description, nullptr);
	this->width = -1;
	this->height = -1;
	$set(this, accessibleContext, nullptr);
	$set(this, image, $nc($($Toolkit::getDefaultToolkit()))->createImage(imageData));
	if (this->image == nullptr) {
		return;
	}
	$var($Object, o, $nc(this->image)->getProperty("comment"_s, this->imageObserver));
	if ($instanceOf($String, o)) {
		$set(this, description, $cast($String, o));
	}
	loadImage(this->image);
}

void ImageIcon::init$() {
	this->loadStatus = 0;
	$set(this, description, nullptr);
	this->width = -1;
	this->height = -1;
	$set(this, accessibleContext, nullptr);
}

void ImageIcon::loadImage($Image* image) {
	$var($MediaTracker, mTracker, getTracker());
	$synchronized(mTracker) {
		int32_t id = getNextID();
		$nc(mTracker)->addImage(image, id);
		try {
			mTracker->waitForID(id, 0);
		} catch ($InterruptedException& e) {
			$nc($System::out)->println("INTERRUPTED while loading Image"_s);
		}
		this->loadStatus = mTracker->statusID(id, false);
		mTracker->removeImage(image, id);
		this->width = $nc(image)->getWidth(this->imageObserver);
		this->height = image->getHeight(this->imageObserver);
	}
}

int32_t ImageIcon::getNextID() {
	$synchronized(getTracker()) {
		return ++ImageIcon::mediaTrackerID;
	}
}

$MediaTracker* ImageIcon::getTracker() {
	$useLocalCurrentObjectStackCache();
	$var($Object, trackerObj, nullptr);
	$var($AppContext, ac, $AppContext::getAppContext());
	$synchronized(ac) {
		$assign(trackerObj, $nc(ac)->get(ImageIcon::TRACKER_KEY));
		if (trackerObj == nullptr) {
			$var($Component, comp, $new($ImageIcon$3, this));
			$assign(trackerObj, $new($MediaTracker, comp));
			ac->put(ImageIcon::TRACKER_KEY, trackerObj);
		}
	}
	return $cast($MediaTracker, trackerObj);
}

int32_t ImageIcon::getImageLoadStatus() {
	return this->loadStatus;
}

$Image* ImageIcon::getImage() {
	return this->image;
}

void ImageIcon::setImage($Image* image) {
	$set(this, image, image);
	loadImage(image);
}

$String* ImageIcon::getDescription() {
	return this->description;
}

void ImageIcon::setDescription($String* description) {
	$set(this, description, description);
}

void ImageIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$synchronized(this) {
		if (this->imageObserver == nullptr) {
			$nc(g)->drawImage(this->image, x, y, c);
		} else {
			$nc(g)->drawImage(this->image, x, y, this->imageObserver);
		}
	}
}

int32_t ImageIcon::getIconWidth() {
	return this->width;
}

int32_t ImageIcon::getIconHeight() {
	return this->height;
}

void ImageIcon::setImageObserver($ImageObserver* observer) {
	$set(this, imageObserver, observer);
}

$ImageObserver* ImageIcon::getImageObserver() {
	return this->imageObserver;
}

$String* ImageIcon::toString() {
	if (this->description != nullptr) {
		return this->description;
	}
	return $Icon::toString();
}

void ImageIcon::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$set(this, imageObserver, $cast($ImageObserver, $nc(f)->get("imageObserver"_s, ($Object*)nullptr)));
	$set(this, description, $cast($String, f->get("description"_s, ($Object*)nullptr)));
	this->width = f->get("width"_s, -1);
	this->height = f->get("height"_s, -1);
	$set(this, accessibleContext, $cast($ImageIcon$AccessibleImageIcon, f->get("accessibleContext"_s, ($Object*)nullptr)));
	int32_t w = s->readInt();
	int32_t h = s->readInt();
	$var($ints, pixels, ($cast($ints, s->readObject())));
	if (pixels == nullptr && (w != -1 || h != -1)) {
		$throwNew($IllegalStateException, $$str({"Inconsistent width and height for null image ["_s, $$str(w), ", "_s, $$str(h), "]"_s}));
	}
	if (pixels != nullptr && (w < 0 || h < 0)) {
		$throwNew($IllegalStateException, $$str({"Inconsistent width and height for image ["_s, $$str(w), ", "_s, $$str(h), "]"_s}));
	}
	bool var$0 = w != getIconWidth();
	if (var$0 || h != getIconHeight()) {
		$throwNew($IllegalStateException, $$str({"Inconsistent width and height for image ["_s, $$str(w), ", "_s, $$str(h), "]"_s}));
	}
	if (pixels != nullptr) {
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		$var($ColorModel, cm, $ColorModel::getRGBdefault());
		$set(this, image, $nc(tk)->createImage(static_cast<$ImageProducer*>($$new($MemoryImageSource, w, h, cm, pixels, 0, w))));
		loadImage(this->image);
	}
}

void ImageIcon::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	int32_t w = getIconWidth();
	int32_t h = getIconHeight();
	$var($ints, pixels, this->image != nullptr ? $new($ints, w * h) : ($ints*)nullptr);
	if (this->image != nullptr) {
		try {
			$var($PixelGrabber, pg, $new($PixelGrabber, this->image, 0, 0, w, h, pixels, 0, w));
			pg->grabPixels();
			if (((int32_t)(pg->getStatus() & (uint32_t)$ImageObserver::ABORT)) != 0) {
				$throwNew($IOException, "failed to load image contents"_s);
			}
		} catch ($InterruptedException& e) {
			$throwNew($IOException, "image load interrupted"_s);
		}
	}
	s->writeInt(w);
	s->writeInt(h);
	s->writeObject(pixels);
}

$AccessibleContext* ImageIcon::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($ImageIcon$AccessibleImageIcon, this));
	}
	return this->accessibleContext;
}

void clinit$ImageIcon($Class* class$) {
	$beforeCallerSensitive();
	{
		$assignStatic(ImageIcon::component, $cast($Component, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ImageIcon$1)))));
		$assignStatic(ImageIcon::tracker, $new($MediaTracker, ImageIcon::component));
	}
	$assignStatic(ImageIcon::TRACKER_KEY, $new($StringBuilder, "TRACKER_KEY"_s));
}

ImageIcon::ImageIcon() {
}

$Class* ImageIcon::load$($String* name, bool initialize) {
	$loadClass(ImageIcon, name, initialize, &_ImageIcon_ClassInfo_, clinit$ImageIcon, allocate$ImageIcon);
	return class$;
}

$Class* ImageIcon::class$ = nullptr;

	} // swing
} // javax