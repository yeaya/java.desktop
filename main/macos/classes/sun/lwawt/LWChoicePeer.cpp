#include <sun/lwawt/LWChoicePeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Choice.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWChoicePeer$JComboBoxDelegate.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef ITEM_STATE_CHANGED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Choice = ::java::awt::Choice;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $Region = ::sun::java2d::pipe::Region;
using $LWChoicePeer$JComboBoxDelegate = ::sun::lwawt::LWChoicePeer$JComboBoxDelegate;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$FieldInfo _LWChoicePeer_FieldInfo_[] = {
	{"skipPostMessage", "Z", nullptr, $PRIVATE, $field(LWChoicePeer, skipPostMessage)},
	{}
};

$MethodInfo _LWChoicePeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Choice;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWChoicePeer::*)($Choice*,$PlatformComponent*)>(&LWChoicePeer::init$))},
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"createDelegate", "()Ljavax/swing/JComboBox;", "()Ljavax/swing/JComboBox<Ljava/lang/String;>;", 0},
	{"initializeImpl", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"select", "(I)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWChoicePeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWChoicePeer$JComboBoxDelegate", "sun.lwawt.LWChoicePeer", "JComboBoxDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWChoicePeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWChoicePeer",
	"sun.lwawt.LWComponentPeer",
	"java.awt.peer.ChoicePeer,java.awt.event.ItemListener",
	_LWChoicePeer_FieldInfo_,
	_LWChoicePeer_MethodInfo_,
	"Lsun/lwawt/LWComponentPeer<Ljava/awt/Choice;Ljavax/swing/JComboBox<Ljava/lang/String;>;>;Ljava/awt/peer/ChoicePeer;Ljava/awt/event/ItemListener;",
	nullptr,
	_LWChoicePeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWChoicePeer$JComboBoxDelegate"
};

$Object* allocate$LWChoicePeer($Class* clazz) {
	return $of($alloc(LWChoicePeer));
}

void LWChoicePeer::dispose() {
	this->$LWComponentPeer::dispose();
}

$GraphicsConfiguration* LWChoicePeer::getGraphicsConfiguration() {
	 return this->$LWComponentPeer::getGraphicsConfiguration();
}

bool LWChoicePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWChoicePeer::getGraphics() {
	 return this->$LWComponentPeer::getGraphics();
}

$ColorModel* LWChoicePeer::getColorModel() {
	 return this->$LWComponentPeer::getColorModel();
}

void LWChoicePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWChoicePeer::getBackBuffer() {
	 return this->$LWComponentPeer::getBackBuffer();
}

void LWChoicePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWChoicePeer::destroyBuffers() {
	this->$LWComponentPeer::destroyBuffers();
}

void LWChoicePeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWChoicePeer::getLocationOnScreen() {
	 return this->$LWComponentPeer::getLocationOnScreen();
}

void LWChoicePeer::setBackground($Color* c) {
	this->$LWComponentPeer::setBackground(c);
}

void LWChoicePeer::setForeground($Color* c) {
	this->$LWComponentPeer::setForeground(c);
}

void LWChoicePeer::setFont($Font* f) {
	this->$LWComponentPeer::setFont(f);
}

$FontMetrics* LWChoicePeer::getFontMetrics($Font* f) {
	 return this->$LWComponentPeer::getFontMetrics(f);
}

void LWChoicePeer::setEnabled(bool e) {
	this->$LWComponentPeer::setEnabled(e);
}

void LWChoicePeer::setVisible(bool v) {
	this->$LWComponentPeer::setVisible(v);
}

void LWChoicePeer::paint($Graphics* g) {
	this->$LWComponentPeer::paint(g);
}

void LWChoicePeer::print($Graphics* g) {
	this->$LWComponentPeer::print(g);
}

void LWChoicePeer::reparent($ContainerPeer* newContainer) {
	this->$LWComponentPeer::reparent(newContainer);
}

bool LWChoicePeer::isReparentSupported() {
	 return this->$LWComponentPeer::isReparentSupported();
}

void LWChoicePeer::setZOrder($ComponentPeer* above) {
	this->$LWComponentPeer::setZOrder(above);
}

void LWChoicePeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWComponentPeer::coalescePaintEvent(e);
}

void LWChoicePeer::layout() {
	this->$LWComponentPeer::layout();
}

bool LWChoicePeer::isObscured() {
	 return this->$LWComponentPeer::isObscured();
}

bool LWChoicePeer::canDetermineObscurity() {
	 return this->$LWComponentPeer::canDetermineObscurity();
}

$Dimension* LWChoicePeer::getPreferredSize() {
	 return this->$LWComponentPeer::getPreferredSize();
}

$Dimension* LWChoicePeer::getMinimumSize() {
	 return this->$LWComponentPeer::getMinimumSize();
}

void LWChoicePeer::updateCursorImmediately() {
	this->$LWComponentPeer::updateCursorImmediately();
}

bool LWChoicePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWChoicePeer::createImage(int32_t width, int32_t height) {
	 return this->$LWComponentPeer::createImage(width, height);
}

$VolatileImage* LWChoicePeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWComponentPeer::createVolatileImage(w, h);
}

bool LWChoicePeer::handlesWheelScrolling() {
	 return this->$LWComponentPeer::handlesWheelScrolling();
}

void LWChoicePeer::applyShape($Region* shape) {
	this->$LWComponentPeer::applyShape(shape);
}

void LWChoicePeer::handleEvent($AWTEvent* e) {
	this->$LWComponentPeer::handleEvent(e);
}

int32_t LWChoicePeer::hashCode() {
	 return this->$LWComponentPeer::hashCode();
}

bool LWChoicePeer::equals(Object$* arg0) {
	 return this->$LWComponentPeer::equals(arg0);
}

$Object* LWChoicePeer::clone() {
	 return this->$LWComponentPeer::clone();
}

$String* LWChoicePeer::toString() {
	 return this->$LWComponentPeer::toString();
}

void LWChoicePeer::finalize() {
	this->$LWComponentPeer::finalize();
}

void LWChoicePeer::init$($Choice* target, $PlatformComponent* platformComponent) {
	$LWComponentPeer::init$(target, platformComponent);
}

$JComponent* LWChoicePeer::createDelegate() {
	return $new($LWChoicePeer$JComboBoxDelegate, this);
}

void LWChoicePeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::initializeImpl();
	$var($Choice, choice, $cast($Choice, getTarget()));
	$var($JComboBox, combo, $cast($JComboBox, getDelegate()));
	$synchronized(getDelegateLock()) {
		int32_t count = $nc(choice)->getItemCount();
		for (int32_t i = 0; i < count; ++i) {
			$nc(combo)->addItem($(choice->getItem(i)));
		}
		select(choice->getSelectedIndex());
		$nc(combo)->addItemListener(this);
	}
}

void LWChoicePeer::itemStateChanged($ItemEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getStateChange() == $ItemEvent::SELECTED) {
		$synchronized(getDelegateLock()) {
			if (this->skipPostMessage) {
				return;
			}
			$nc(($cast($Choice, $(getTarget()))))->select($nc(($cast($JComboBox, $(getDelegate()))))->getSelectedIndex());
		}
		$var($ItemSelectable, var$0, $cast($ItemSelectable, getTarget()));
		postEvent($$new($ItemEvent, var$0, $ItemEvent::ITEM_STATE_CHANGED, $(e->getItem()), $ItemEvent::SELECTED));
	}
}

void LWChoicePeer::add($String* item, int32_t index) {
	$synchronized(getDelegateLock()) {
		$nc(($cast($JComboBox, $(getDelegate()))))->insertItemAt(item, index);
	}
}

void LWChoicePeer::remove(int32_t index) {
	$synchronized(getDelegateLock()) {
		this->skipPostMessage = true;
		$nc(($cast($JComboBox, $(getDelegate()))))->removeItemAt(index);
		this->skipPostMessage = false;
	}
}

void LWChoicePeer::removeAll() {
	$synchronized(getDelegateLock()) {
		$nc(($cast($JComboBox, $(getDelegate()))))->removeAllItems();
	}
}

void LWChoicePeer::select(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		if (index != $nc(($cast($JComboBox, $(getDelegate()))))->getSelectedIndex()) {
			this->skipPostMessage = true;
			$nc(($cast($JComboBox, $(getDelegate()))))->setSelectedIndex(index);
			this->skipPostMessage = false;
		}
	}
}

bool LWChoicePeer::isFocusable() {
	return true;
}

LWChoicePeer::LWChoicePeer() {
}

$Class* LWChoicePeer::load$($String* name, bool initialize) {
	$loadClass(LWChoicePeer, name, initialize, &_LWChoicePeer_ClassInfo_, allocate$LWChoicePeer);
	return class$;
}

$Class* LWChoicePeer::class$ = nullptr;

	} // lwawt
} // sun