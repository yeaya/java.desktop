#include <java/awt/Canvas.h>

#include <java/awt/BufferCapabilities.h>
#include <java/awt/Canvas$AccessibleAWTCanvas.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/awt/peer/CanvasPeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Canvas$AccessibleAWTCanvas = ::java::awt::Canvas$AccessibleAWTCanvas;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $CanvasPeer = ::java::awt::peer::CanvasPeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$FieldInfo _Canvas_FieldInfo_[] = {
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Canvas, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Canvas, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Canvas, serialVersionUID)},
	{}
};

$MethodInfo _Canvas_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Canvas::*)()>(&Canvas::init$))},
	{"<init>", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(Canvas::*)($GraphicsConfiguration*)>(&Canvas::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"createBufferStrategy", "(I)V", nullptr, $PUBLIC},
	{"createBufferStrategy", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getBufferStrategy", "()Ljava/awt/image/BufferStrategy;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postsOldMouseEvents", "()Z", nullptr, 0},
	{"setGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Canvas_InnerClassesInfo_[] = {
	{"java.awt.Canvas$AccessibleAWTCanvas", "java.awt.Canvas", "AccessibleAWTCanvas", $PROTECTED},
	{}
};

$ClassInfo _Canvas_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Canvas",
	"java.awt.Component",
	"javax.accessibility.Accessible",
	_Canvas_FieldInfo_,
	_Canvas_MethodInfo_,
	nullptr,
	nullptr,
	_Canvas_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Canvas$AccessibleAWTCanvas"
};

$Object* allocate$Canvas($Class* clazz) {
	return $of($alloc(Canvas));
}

$String* Canvas::toString() {
	 return this->$Component::toString();
}

int32_t Canvas::hashCode() {
	 return this->$Component::hashCode();
}

bool Canvas::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* Canvas::clone() {
	 return this->$Component::clone();
}

void Canvas::finalize() {
	this->$Component::finalize();
}

$String* Canvas::base = nullptr;
int32_t Canvas::nameCounter = 0;

void Canvas::init$() {
	$Component::init$();
}

void Canvas::init$($GraphicsConfiguration* config) {
	Canvas::init$();
	setGraphicsConfiguration(config);
}

void Canvas::setGraphicsConfiguration($GraphicsConfiguration* gc$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, gc$renamed);
	$synchronized(getTreeLock()) {
		$var($CanvasPeer, peer, $cast($CanvasPeer, this->peer));
		if (peer != nullptr) {
			$assign(gc, peer->getAppropriateGraphicsConfiguration(gc));
		}
		$Component::setGraphicsConfiguration(gc);
	}
}

$String* Canvas::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Canvas::class$) {
		$var($String, var$0, Canvas::base);
		return $concat(var$0, $$str(Canvas::nameCounter++));
	}
}

void Canvas::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createCanvas(this));
		}
		$Component::addNotify();
	}
}

void Canvas::paint($Graphics* g) {
	$nc(g)->clearRect(0, 0, this->width, this->height);
}

void Canvas::update($Graphics* g) {
	$nc(g)->clearRect(0, 0, this->width, this->height);
	paint(g);
}

bool Canvas::postsOldMouseEvents() {
	return true;
}

void Canvas::createBufferStrategy(int32_t numBuffers) {
	$Component::createBufferStrategy(numBuffers);
}

void Canvas::createBufferStrategy(int32_t numBuffers, $BufferCapabilities* caps) {
	$Component::createBufferStrategy(numBuffers, caps);
}

$BufferStrategy* Canvas::getBufferStrategy() {
	return $Component::getBufferStrategy();
}

$AccessibleContext* Canvas::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Canvas$AccessibleAWTCanvas, this));
	}
	return this->accessibleContext;
}

void clinit$Canvas($Class* class$) {
	$assignStatic(Canvas::base, "canvas"_s);
	Canvas::nameCounter = 0;
}

Canvas::Canvas() {
}

$Class* Canvas::load$($String* name, bool initialize) {
	$loadClass(Canvas, name, initialize, &_Canvas_ClassInfo_, clinit$Canvas, allocate$Canvas);
	return class$;
}

$Class* Canvas::class$ = nullptr;

	} // awt
} // java