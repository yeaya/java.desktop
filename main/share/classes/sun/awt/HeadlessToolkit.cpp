#include <sun/awt/HeadlessToolkit.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/JobAttributes.h>
#include <java/awt/PageAttributes.h>
#include <java/awt/Point.h>
#include <java/awt/PrintJob.h>
#include <java/awt/SystemTray.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/peer/FontPeer.h>
#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <java/awt/peer/SystemTrayPeer.h>
#include <java/awt/peer/TrayIconPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/net/URL.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/GlobalCursorManager.h>
#include <sun/awt/HeadlessToolkit$1.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $AWTEventListenerArray = $Array<::java::awt::event::AWTEventListener>;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $HeadlessException = ::java::awt::HeadlessException;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $JobAttributes = ::java::awt::JobAttributes;
using $PageAttributes = ::java::awt::PageAttributes;
using $Point = ::java::awt::Point;
using $PrintJob = ::java::awt::PrintJob;
using $SystemTray = ::java::awt::SystemTray;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon = ::java::awt::TrayIcon;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $FontPeer = ::java::awt::peer::FontPeer;
using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $SystemTrayPeer = ::java::awt::peer::SystemTrayPeer;
using $TrayIconPeer = ::java::awt::peer::TrayIconPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $URL = ::java::net::URL;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;
using $HeadlessToolkit$1 = ::sun::awt::HeadlessToolkit$1;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$NamedAttribute HeadlessToolkit_Attribute_var$0[] = {
	{"since", 's', "10"},
	{}
};

$CompoundAttribute _HeadlessToolkit_MethodAnnotations_getMenuShortcutKeyMask28[] = {
	{"Ljava/lang/Deprecated;", HeadlessToolkit_Attribute_var$0},
	{}
};

$FieldInfo _HeadlessToolkit_FieldInfo_[] = {
	{"kfmPeer", "Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeadlessToolkit, kfmPeer)},
	{"tk", "Ljava/awt/Toolkit;", nullptr, $PRIVATE | $FINAL, $field(HeadlessToolkit, tk)},
	{"componentFactory", "Lsun/awt/ComponentFactory;", nullptr, $PRIVATE, $field(HeadlessToolkit, componentFactory)},
	{}
};

$MethodInfo _HeadlessToolkit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Toolkit;)V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessToolkit::*)($Toolkit*)>(&HeadlessToolkit::init$))},
	{"addAWTEventListener", "(Ljava/awt/event/AWTEventListener;J)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"areExtraMouseButtonsEnabled", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"beep", "()V", nullptr, $PUBLIC},
	{"checkImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"createCustomCursor", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)Ljava/awt/Cursor;", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException,java.awt.HeadlessException"},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC},
	{"createImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImage", "([BII)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImage", "(Ljava/awt/image/ImageProducer;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImage", "([B)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createSystemTray", "(Ljava/awt/SystemTray;)Ljava/awt/peer/SystemTrayPeer;", nullptr, $PUBLIC, $method(static_cast<$SystemTrayPeer*(HeadlessToolkit::*)($SystemTray*)>(&HeadlessToolkit::createSystemTray)), "java.awt.HeadlessException"},
	{"createTrayIcon", "(Ljava/awt/TrayIcon;)Ljava/awt/peer/TrayIconPeer;", nullptr, $PUBLIC, $method(static_cast<$TrayIconPeer*(HeadlessToolkit::*)($TrayIcon*)>(&HeadlessToolkit::createTrayIcon)), "java.awt.HeadlessException"},
	{"getAWTEventListeners", "()[Ljava/awt/event/AWTEventListener;", nullptr, $PUBLIC},
	{"getAWTEventListeners", "(J)[Ljava/awt/event/AWTEventListener;", nullptr, $PUBLIC},
	{"getBestCursorSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getFontList", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getFontPeer", "(Ljava/lang/String;I)Ljava/awt/peer/FontPeer;", nullptr, $PUBLIC},
	{"getGlobalCursorManager", "()Lsun/awt/GlobalCursorManager;", nullptr, $PUBLIC, $method(static_cast<$GlobalCursorManager*(HeadlessToolkit::*)()>(&HeadlessToolkit::getGlobalCursorManager)), "java.awt.HeadlessException"},
	{"getImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getKeyboardFocusManagerPeer", "()Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $PUBLIC},
	{"getLockingKeyState", "(I)Z", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"getMaximumCursorColors", "()I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getMenuShortcutKeyMask", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.awt.HeadlessException", nullptr, _HeadlessToolkit_MethodAnnotations_getMenuShortcutKeyMask28},
	{"getMenuShortcutKeyMaskEx", "()I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/awt/JobAttributes;Ljava/awt/PageAttributes;)Ljava/awt/PrintJob;", nullptr, $PUBLIC},
	{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/util/Properties;)Ljava/awt/PrintJob;", nullptr, $PUBLIC},
	{"getScreenInsets", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/Insets;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getScreenResolution", "()I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getScreenSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getSystemClipboard", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getSystemEventQueueImpl", "()Ljava/awt/EventQueue;", nullptr, $PUBLIC},
	{"getUnderlyingToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC, $method(static_cast<$Toolkit*(HeadlessToolkit::*)()>(&HeadlessToolkit::getUnderlyingToolkit))},
	{"isAlwaysOnTopSupported", "()Z", nullptr, $PUBLIC},
	{"isDesktopSupported", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(HeadlessToolkit::*)()>(&HeadlessToolkit::isDesktopSupported))},
	{"isDynamicLayoutActive", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"isDynamicLayoutSet", "()Z", nullptr, $PROTECTED, nullptr, "java.awt.HeadlessException"},
	{"isModalExclusionTypeSupported", "(Ljava/awt/Dialog$ModalExclusionType;)Z", nullptr, $PUBLIC},
	{"isModalityTypeSupported", "(Ljava/awt/Dialog$ModalityType;)Z", nullptr, $PUBLIC},
	{"isTraySupported", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(HeadlessToolkit::*)()>(&HeadlessToolkit::isTraySupported))},
	{"loadSystemColors", "([I)V", nullptr, $PROTECTED, nullptr, "java.awt.HeadlessException"},
	{"mapInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map;", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"prepareImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"removeAWTEventListener", "(Ljava/awt/event/AWTEventListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setDynamicLayout", "(Z)V", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"setLockingKeyState", "(IZ)V", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"sync", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HeadlessToolkit_InnerClassesInfo_[] = {
	{"sun.awt.HeadlessToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessToolkit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.HeadlessToolkit",
	"java.awt.Toolkit",
	"sun.awt.ComponentFactory,sun.awt.KeyboardFocusManagerPeerProvider",
	_HeadlessToolkit_FieldInfo_,
	_HeadlessToolkit_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessToolkit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.HeadlessToolkit$1"
};

$Object* allocate$HeadlessToolkit($Class* clazz) {
	return $of($alloc(HeadlessToolkit));
}

int32_t HeadlessToolkit::hashCode() {
	 return this->$Toolkit::hashCode();
}

bool HeadlessToolkit::equals(Object$* arg0) {
	 return this->$Toolkit::equals(arg0);
}

$Object* HeadlessToolkit::clone() {
	 return this->$Toolkit::clone();
}

$String* HeadlessToolkit::toString() {
	 return this->$Toolkit::toString();
}

void HeadlessToolkit::finalize() {
	this->$Toolkit::finalize();
}

$KeyboardFocusManagerPeer* HeadlessToolkit::kfmPeer = nullptr;

void HeadlessToolkit::init$($Toolkit* tk) {
	$Toolkit::init$();
	$set(this, tk, tk);
	if ($instanceOf($ComponentFactory, tk)) {
		$set(this, componentFactory, $cast($ComponentFactory, tk));
	}
}

$Toolkit* HeadlessToolkit::getUnderlyingToolkit() {
	return this->tk;
}

$KeyboardFocusManagerPeer* HeadlessToolkit::getKeyboardFocusManagerPeer() {
	return HeadlessToolkit::kfmPeer;
}

$TrayIconPeer* HeadlessToolkit::createTrayIcon($TrayIcon* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$SystemTrayPeer* HeadlessToolkit::createSystemTray($SystemTray* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

bool HeadlessToolkit::isTraySupported() {
	return false;
}

$GlobalCursorManager* HeadlessToolkit::getGlobalCursorManager() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

void HeadlessToolkit::loadSystemColors($ints* systemColors) {
	$throwNew($HeadlessException);
}

$ColorModel* HeadlessToolkit::getColorModel() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

int32_t HeadlessToolkit::getScreenResolution() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$Map* HeadlessToolkit::mapInputMethodHighlight($InputMethodHighlight* highlight) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

int32_t HeadlessToolkit::getMenuShortcutKeyMask() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

int32_t HeadlessToolkit::getMenuShortcutKeyMaskEx() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

bool HeadlessToolkit::getLockingKeyState(int32_t keyCode) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

void HeadlessToolkit::setLockingKeyState(int32_t keyCode, bool on) {
	$throwNew($HeadlessException);
}

$Cursor* HeadlessToolkit::createCustomCursor($Image* cursor, $Point* hotSpot, $String* name) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$Dimension* HeadlessToolkit::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

int32_t HeadlessToolkit::getMaximumCursorColors() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$DragGestureRecognizer* HeadlessToolkit::createDragGestureRecognizer($Class* abstractRecognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	return nullptr;
}

$Dimension* HeadlessToolkit::getScreenSize() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$Insets* HeadlessToolkit::getScreenInsets($GraphicsConfiguration* gc) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

void HeadlessToolkit::setDynamicLayout(bool dynamic) {
	$throwNew($HeadlessException);
}

bool HeadlessToolkit::isDynamicLayoutSet() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

bool HeadlessToolkit::isDynamicLayoutActive() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$Clipboard* HeadlessToolkit::getSystemClipboard() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$PrintJob* HeadlessToolkit::getPrintJob($Frame* frame, $String* jobtitle, $JobAttributes* jobAttributes, $PageAttributes* pageAttributes) {
	if (frame != nullptr) {
		$throwNew($HeadlessException);
	}
	$throwNew($NullPointerException, "frame must not be null"_s);
	$shouldNotReachHere();
}

$PrintJob* HeadlessToolkit::getPrintJob($Frame* frame, $String* doctitle, $Properties* props) {
	if (frame != nullptr) {
		$throwNew($HeadlessException);
	}
	$throwNew($NullPointerException, "frame must not be null"_s);
	$shouldNotReachHere();
}

void HeadlessToolkit::sync() {
}

void HeadlessToolkit::beep() {
	$nc($System::out)->write(7);
}

$EventQueue* HeadlessToolkit::getSystemEventQueueImpl() {
	return $SunToolkit::getSystemEventQueueImplPP();
}

int32_t HeadlessToolkit::checkImage($Image* img, int32_t w, int32_t h, $ImageObserver* o) {
	return $nc(this->tk)->checkImage(img, w, h, o);
}

bool HeadlessToolkit::prepareImage($Image* img, int32_t w, int32_t h, $ImageObserver* o) {
	return $nc(this->tk)->prepareImage(img, w, h, o);
}

$Image* HeadlessToolkit::getImage($String* filename) {
	return $nc(this->tk)->getImage(filename);
}

$Image* HeadlessToolkit::getImage($URL* url) {
	return $nc(this->tk)->getImage(url);
}

$Image* HeadlessToolkit::createImage($String* filename) {
	return $nc(this->tk)->createImage(filename);
}

$Image* HeadlessToolkit::createImage($URL* url) {
	return $nc(this->tk)->createImage(url);
}

$Image* HeadlessToolkit::createImage($bytes* data, int32_t offset, int32_t length) {
	return $nc(this->tk)->createImage(data, offset, length);
}

$Image* HeadlessToolkit::createImage($ImageProducer* producer) {
	return $nc(this->tk)->createImage(producer);
}

$Image* HeadlessToolkit::createImage($bytes* imagedata) {
	return $nc(this->tk)->createImage(imagedata);
}

$FontPeer* HeadlessToolkit::getFontPeer($String* name, int32_t style) {
	if (this->componentFactory != nullptr) {
		return $nc(this->componentFactory)->getFontPeer(name, style);
	}
	return nullptr;
}

$FontMetrics* HeadlessToolkit::getFontMetrics($Font* font) {
	return $nc(this->tk)->getFontMetrics(font);
}

$StringArray* HeadlessToolkit::getFontList() {
	return $nc(this->tk)->getFontList();
}

void HeadlessToolkit::addPropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	$nc(this->tk)->addPropertyChangeListener(name, pcl);
}

void HeadlessToolkit::removePropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	$nc(this->tk)->removePropertyChangeListener(name, pcl);
}

bool HeadlessToolkit::isModalityTypeSupported($Dialog$ModalityType* modalityType) {
	return false;
}

bool HeadlessToolkit::isModalExclusionTypeSupported($Dialog$ModalExclusionType* exclusionType) {
	return false;
}

bool HeadlessToolkit::isAlwaysOnTopSupported() {
	return false;
}

void HeadlessToolkit::addAWTEventListener($AWTEventListener* listener, int64_t eventMask) {
	$nc(this->tk)->addAWTEventListener(listener, eventMask);
}

void HeadlessToolkit::removeAWTEventListener($AWTEventListener* listener) {
	$nc(this->tk)->removeAWTEventListener(listener);
}

$AWTEventListenerArray* HeadlessToolkit::getAWTEventListeners() {
	return $nc(this->tk)->getAWTEventListeners();
}

$AWTEventListenerArray* HeadlessToolkit::getAWTEventListeners(int64_t eventMask) {
	return $nc(this->tk)->getAWTEventListeners(eventMask);
}

bool HeadlessToolkit::isDesktopSupported() {
	return false;
}

bool HeadlessToolkit::areExtraMouseButtonsEnabled() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

void clinit$HeadlessToolkit($Class* class$) {
	$assignStatic(HeadlessToolkit::kfmPeer, $new($HeadlessToolkit$1));
}

HeadlessToolkit::HeadlessToolkit() {
}

$Class* HeadlessToolkit::load$($String* name, bool initialize) {
	$loadClass(HeadlessToolkit, name, initialize, &_HeadlessToolkit_ClassInfo_, clinit$HeadlessToolkit, allocate$HeadlessToolkit);
	return class$;
}

$Class* HeadlessToolkit::class$ = nullptr;

	} // awt
} // sun