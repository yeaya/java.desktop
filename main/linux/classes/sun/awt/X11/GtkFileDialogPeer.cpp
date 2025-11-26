#include <sun/awt/X11/GtkFileDialogPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$FileDialogAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XDialogPeer.h>
#include <sun/awt/X11/XNETProtocol.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef LOAD
#undef SAVE

using $FileArray = $Array<::java::io::File>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $FileDialog = ::java::awt::FileDialog;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$FileDialogAccessor = ::sun::awt::AWTAccessor$FileDialogAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XDialogPeer = ::sun::awt::X11::XDialogPeer;
using $XNETProtocol = ::sun::awt::X11::XNETProtocol;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWM = ::sun::awt::X11::XWM;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

class GtkFileDialogPeer$$Lambda$lambda$setVisible$0 : public $Runnable {
	$class(GtkFileDialogPeer$$Lambda$lambda$setVisible$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(GtkFileDialogPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$setVisible$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GtkFileDialogPeer$$Lambda$lambda$setVisible$0>());
	}
	GtkFileDialogPeer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GtkFileDialogPeer$$Lambda$lambda$setVisible$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GtkFileDialogPeer$$Lambda$lambda$setVisible$0, inst$)},
	{}
};
$MethodInfo GtkFileDialogPeer$$Lambda$lambda$setVisible$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/X11/GtkFileDialogPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(GtkFileDialogPeer$$Lambda$lambda$setVisible$0::*)(GtkFileDialogPeer*)>(&GtkFileDialogPeer$$Lambda$lambda$setVisible$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GtkFileDialogPeer$$Lambda$lambda$setVisible$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.GtkFileDialogPeer$$Lambda$lambda$setVisible$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* GtkFileDialogPeer$$Lambda$lambda$setVisible$0::load$($String* name, bool initialize) {
	$loadClass(GtkFileDialogPeer$$Lambda$lambda$setVisible$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GtkFileDialogPeer$$Lambda$lambda$setVisible$0::class$ = nullptr;

$FieldInfo _GtkFileDialogPeer_FieldInfo_[] = {
	{"fd", "Ljava/awt/FileDialog;", nullptr, $PRIVATE | $FINAL, $field(GtkFileDialogPeer, fd)},
	{"widget", "J", nullptr, $PRIVATE | $VOLATILE, $field(GtkFileDialogPeer, widget)},
	{"standaloneWindow", "J", nullptr, $PRIVATE, $field(GtkFileDialogPeer, standaloneWindow)},
	{"quit", "Z", nullptr, $PRIVATE | $VOLATILE, $field(GtkFileDialogPeer, quit$)},
	{}
};

$MethodInfo _GtkFileDialogPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*beginLayout", "()V", nullptr, $PUBLIC},
	{"*beginValidate", "()V", nullptr, $PUBLIC},
	{"*blockWindows", "(Ljava/util/List;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/FileDialog;)V", nullptr, 0, $method(static_cast<void(GtkFileDialogPeer::*)($FileDialog*)>(&GtkFileDialogPeer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"filenameFilterCallback", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(GtkFileDialogPeer::*)($String*)>(&GtkFileDialogPeer::filenameFilterCallback))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&GtkFileDialogPeer::initIDs))},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"lambda$setVisible$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(GtkFileDialogPeer::*)()>(&GtkFileDialogPeer::lambda$setVisible$0))},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"quit", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GtkFileDialogPeer::*)()>(&GtkFileDialogPeer::quit))},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*repositionSecurityWarning", "()V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"requestXFocus", "(JZ)V", nullptr, $PROTECTED},
	{"run", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/io/FilenameFilter;ZII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GtkFileDialogPeer::*)($String*,int32_t,$String*,$String*,$FilenameFilter*,bool,int32_t,int32_t)>(&GtkFileDialogPeer::run))},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC | $NATIVE},
	{"setDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFile", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFileInternal", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(GtkFileDialogPeer::*)($String*,$StringArray*)>(&GtkFileDialogPeer::setFileInternal))},
	{"setFilenameFilter", "(Ljava/io/FilenameFilter;)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"*setOpacity", "(F)V", nullptr, $PUBLIC},
	{"*setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"*setResizable", "(Z)V", nullptr, $PUBLIC},
	{"*setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setWindow", "(J)Z", nullptr, 0, $method(static_cast<bool(GtkFileDialogPeer::*)(int64_t)>(&GtkFileDialogPeer::setWindow))},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"showNativeDialog", "()V", nullptr, $PRIVATE, $method(static_cast<void(GtkFileDialogPeer::*)()>(&GtkFileDialogPeer::showNativeDialog))},
	{"*toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"*updateIconImages", "()V", nullptr, $PUBLIC},
	{"*updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateWindow", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 31
#define _METHOD_INDEX_quit 39
#define _METHOD_INDEX_run 44
#define _METHOD_INDEX_setBounds 46
#define _METHOD_INDEX_toFront 64

$ClassInfo _GtkFileDialogPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.GtkFileDialogPeer",
	"sun.awt.X11.XDialogPeer",
	"java.awt.peer.FileDialogPeer",
	_GtkFileDialogPeer_FieldInfo_,
	_GtkFileDialogPeer_MethodInfo_
};

$Object* allocate$GtkFileDialogPeer($Class* clazz) {
	return $of($alloc(GtkFileDialogPeer));
}

void GtkFileDialogPeer::blockWindows($List* toBlock) {
	this->$XDialogPeer::blockWindows(toBlock);
}

void GtkFileDialogPeer::updateMinimumSize() {
	this->$XDialogPeer::updateMinimumSize();
}

$Graphics* GtkFileDialogPeer::getGraphics() {
	 return this->$XDialogPeer::getGraphics();
}

void GtkFileDialogPeer::setTitle($String* title) {
	this->$XDialogPeer::setTitle(title);
}

$Insets* GtkFileDialogPeer::getInsets() {
	 return this->$XDialogPeer::getInsets();
}

void GtkFileDialogPeer::setResizable(bool resizable) {
	this->$XDialogPeer::setResizable(resizable);
}

$Point* GtkFileDialogPeer::getLocationOnScreen() {
	 return this->$XDialogPeer::getLocationOnScreen();
}

void GtkFileDialogPeer::updateIconImages() {
	this->$XDialogPeer::updateIconImages();
}

void GtkFileDialogPeer::toBack() {
	this->$XDialogPeer::toBack();
}

void GtkFileDialogPeer::updateAlwaysOnTopState() {
	this->$XDialogPeer::updateAlwaysOnTopState();
}

void GtkFileDialogPeer::repositionSecurityWarning() {
	this->$XDialogPeer::repositionSecurityWarning();
}

void GtkFileDialogPeer::setModalBlocked($Dialog* d, bool blocked) {
	this->$XDialogPeer::setModalBlocked(d, blocked);
}

void GtkFileDialogPeer::updateFocusableWindowState() {
	this->$XDialogPeer::updateFocusableWindowState();
}

void GtkFileDialogPeer::print($Graphics* g) {
	this->$XDialogPeer::print(g);
}

void GtkFileDialogPeer::setOpacity(float opacity) {
	this->$XDialogPeer::setOpacity(opacity);
}

void GtkFileDialogPeer::setOpaque(bool isOpaque) {
	this->$XDialogPeer::setOpaque(isOpaque);
}

void GtkFileDialogPeer::updateWindow() {
	this->$XDialogPeer::updateWindow();
}

void GtkFileDialogPeer::paint($Graphics* g) {
	this->$XDialogPeer::paint(g);
}

void GtkFileDialogPeer::setBackground($Color* c) {
	this->$XDialogPeer::setBackground(c);
}

void GtkFileDialogPeer::setForeground($Color* c) {
	this->$XDialogPeer::setForeground(c);
}

void GtkFileDialogPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XDialogPeer::reparent(newNativeParent);
}

bool GtkFileDialogPeer::isReparentSupported() {
	 return this->$XDialogPeer::isReparentSupported();
}

bool GtkFileDialogPeer::isObscured() {
	 return this->$XDialogPeer::isObscured();
}

bool GtkFileDialogPeer::canDetermineObscurity() {
	 return this->$XDialogPeer::canDetermineObscurity();
}

bool GtkFileDialogPeer::isFocusable() {
	 return this->$XDialogPeer::isFocusable();
}

bool GtkFileDialogPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XDialogPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void GtkFileDialogPeer::setEnabled(bool value) {
	this->$XDialogPeer::setEnabled(value);
}

void GtkFileDialogPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XDialogPeer::coalescePaintEvent(e);
}

void GtkFileDialogPeer::handleEvent($AWTEvent* e) {
	this->$XDialogPeer::handleEvent(e);
}

$Dimension* GtkFileDialogPeer::getMinimumSize() {
	 return this->$XDialogPeer::getMinimumSize();
}

$Dimension* GtkFileDialogPeer::getPreferredSize() {
	 return this->$XDialogPeer::getPreferredSize();
}

void GtkFileDialogPeer::layout() {
	this->$XDialogPeer::layout();
}

$FontMetrics* GtkFileDialogPeer::getFontMetrics($Font* font) {
	 return this->$XDialogPeer::getFontMetrics(font);
}

void GtkFileDialogPeer::setFont($Font* f) {
	this->$XDialogPeer::setFont(f);
}

void GtkFileDialogPeer::updateCursorImmediately() {
	this->$XDialogPeer::updateCursorImmediately();
}

$Image* GtkFileDialogPeer::createImage(int32_t width, int32_t height) {
	 return this->$XDialogPeer::createImage(width, height);
}

$VolatileImage* GtkFileDialogPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XDialogPeer::createVolatileImage(width, height);
}

void GtkFileDialogPeer::beginValidate() {
	this->$XDialogPeer::beginValidate();
}

void GtkFileDialogPeer::endValidate() {
	this->$XDialogPeer::endValidate();
}

bool GtkFileDialogPeer::handlesWheelScrolling() {
	 return this->$XDialogPeer::handlesWheelScrolling();
}

void GtkFileDialogPeer::beginLayout() {
	this->$XDialogPeer::beginLayout();
}

void GtkFileDialogPeer::endLayout() {
	this->$XDialogPeer::endLayout();
}

void GtkFileDialogPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XDialogPeer::createBuffers(numBuffers, caps);
}

void GtkFileDialogPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XDialogPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* GtkFileDialogPeer::getBackBuffer() {
	 return this->$XDialogPeer::getBackBuffer();
}

void GtkFileDialogPeer::destroyBuffers() {
	this->$XDialogPeer::destroyBuffers();
}

void GtkFileDialogPeer::setZOrder($ComponentPeer* above) {
	this->$XDialogPeer::setZOrder(above);
}

void GtkFileDialogPeer::applyShape($Region* shape) {
	this->$XDialogPeer::applyShape(shape);
}

bool GtkFileDialogPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XDialogPeer::updateGraphicsData(gc);
}

$ColorModel* GtkFileDialogPeer::getColorModel() {
	 return this->$XDialogPeer::getColorModel();
}

$GraphicsConfiguration* GtkFileDialogPeer::getGraphicsConfiguration() {
	 return this->$XDialogPeer::getGraphicsConfiguration();
}

$String* GtkFileDialogPeer::toString() {
	 return this->$XDialogPeer::toString();
}

int32_t GtkFileDialogPeer::hashCode() {
	 return this->$XDialogPeer::hashCode();
}

bool GtkFileDialogPeer::equals(Object$* arg0) {
	 return this->$XDialogPeer::equals(arg0);
}

$Object* GtkFileDialogPeer::clone() {
	 return this->$XDialogPeer::clone();
}

void GtkFileDialogPeer::finalize() {
	this->$XDialogPeer::finalize();
}

void GtkFileDialogPeer::init$($FileDialog* fd) {
	$XDialogPeer::init$(fd);
	this->widget = 0;
	$set(this, fd, fd);
}

void GtkFileDialogPeer::initIDs() {
	$init(GtkFileDialogPeer);
	$prepareNativeStatic(GtkFileDialogPeer, initIDs, void);
	$invokeNativeStatic(GtkFileDialogPeer, initIDs);
	$finishNativeStatic();
}

void GtkFileDialogPeer::run($String* title, int32_t mode, $String* dir, $String* file, $FilenameFilter* filter, bool isMultipleMode, int32_t x, int32_t y) {
	$prepareNative(GtkFileDialogPeer, run, void, $String* title, int32_t mode, $String* dir, $String* file, $FilenameFilter* filter, bool isMultipleMode, int32_t x, int32_t y);
	$invokeNative(GtkFileDialogPeer, run, title, mode, dir, file, filter, isMultipleMode, x, y);
	$finishNative();
}

void GtkFileDialogPeer::quit() {
	$prepareNative(GtkFileDialogPeer, quit, void);
	$invokeNative(GtkFileDialogPeer, quit);
	$finishNative();
}

void GtkFileDialogPeer::toFront() {
	$prepareNative(GtkFileDialogPeer, toFront, void);
	$invokeNative(GtkFileDialogPeer, toFront);
	$finishNative();
}

void GtkFileDialogPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$prepareNative(GtkFileDialogPeer, setBounds, void, int32_t x, int32_t y, int32_t width, int32_t height, int32_t op);
	$invokeNative(GtkFileDialogPeer, setBounds, x, y, width, height, op);
	$finishNative();
}

void GtkFileDialogPeer::setFileInternal($String* directory, $StringArray* filenames) {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$FileDialogAccessor, accessor, $AWTAccessor::getFileDialogAccessor());
	if (filenames == nullptr) {
		$nc(accessor)->setDirectory(this->fd, nullptr);
		accessor->setFile(this->fd, nullptr);
		accessor->setFiles(this->fd, nullptr);
	} else {
		$var($String, with_separator, directory);
		if (directory != nullptr) {
			$init($File);
			$assign(with_separator, directory->endsWith($File::separator) ? directory : ($str({directory, $File::separator})));
		}
		$nc(accessor)->setDirectory(this->fd, with_separator);
		accessor->setFile(this->fd, $nc(filenames)->get(0));
		int32_t filesNumber = (filenames != nullptr) ? $nc(filenames)->length : 0;
		$var($FileArray, files, $new($FileArray, filesNumber));
		for (int32_t i = 0; i < filesNumber; ++i) {
			files->set(i, $$new($File, directory, filenames->get(i)));
		}
		accessor->setFiles(this->fd, files);
	}
}

bool GtkFileDialogPeer::filenameFilterCallback($String* fullname) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fd)->getFilenameFilter() == nullptr) {
		return true;
	}
	$var($File, filen, $new($File, fullname));
	$var($File, var$0, $new($File, $(filen->getParent())));
	return $nc($($nc(this->fd)->getFilenameFilter()))->accept(var$0, $(filen->getName()));
}

void GtkFileDialogPeer::setVisible(bool b) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->quit$ = !b;
			if (b) {
				$var($Runnable, task, static_cast<$Runnable*>($new(GtkFileDialogPeer$$Lambda$lambda$setVisible$0, this)));
				$$new($Thread, nullptr, task, "ShowDialog"_s, 0, false)->start();
			} else {
				quit();
				$nc(this->fd)->setVisible(false);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void GtkFileDialogPeer::dispose() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->quit$ = true;
			quit();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$XDialogPeer::dispose();
}

void GtkFileDialogPeer::setDirectory($String* dir) {
}

void GtkFileDialogPeer::setFile($String* file) {
}

void GtkFileDialogPeer::requestXFocus(int64_t time, bool timeProvided) {
	$useLocalCurrentObjectStackCache();
	if (this->standaloneWindow == 0) {
		$XDialogPeer::requestXFocus(time, timeProvided);
		return;
	}
	$var($XNETProtocol, net_protocol, $nc($($XWM::getWM()))->getNETProtocol());
	if (net_protocol != nullptr) {
		net_protocol->setActiveWindow(this->standaloneWindow);
	}
}

void GtkFileDialogPeer::setFilenameFilter($FilenameFilter* filter) {
}

void GtkFileDialogPeer::showNativeDialog() {
	$useLocalCurrentObjectStackCache();
	$var($String, dirname, $nc(this->fd)->getDirectory());
	$var($String, filename, $nc(this->fd)->getFile());
	if (filename != nullptr) {
		$var($File, file, $new($File, filename));
		bool var$0 = $nc(this->fd)->getMode() == $FileDialog::LOAD && dirname != nullptr;
		if (var$0 && file->getParent() == nullptr) {
			$init($File);
			$assign(filename, $str({dirname, (dirname->endsWith($File::separator) ? ""_s : $File::separator), filename}));
		}
		bool var$1 = $nc(this->fd)->getMode() == $FileDialog::SAVE;
		if (var$1 && file->getParent() != nullptr) {
			$assign(filename, file->getName());
			$assign(dirname, file->getParent());
		}
	}
	if (!this->quit$) {
		$var($String, var$2, $nc(this->fd)->getTitle());
		int32_t var$3 = $nc(this->fd)->getMode();
		$var($String, var$4, dirname);
		$var($String, var$5, filename);
		$var($FilenameFilter, var$6, $nc(this->fd)->getFilenameFilter());
		bool var$7 = $nc(this->fd)->isMultipleMode();
		int32_t var$8 = $nc(this->fd)->getX();
		run(var$2, var$3, var$4, var$5, var$6, var$7, var$8, $nc(this->fd)->getY());
	}
}

bool GtkFileDialogPeer::setWindow(int64_t xid) {
	if (!this->quit$ && this->widget != 0) {
		this->standaloneWindow = xid;
		requestXFocus();
		return true;
	}
	return false;
}

void GtkFileDialogPeer::lambda$setVisible$0() {
	showNativeDialog();
	this->standaloneWindow = 0;
	$nc(this->fd)->setVisible(false);
}

void clinit$GtkFileDialogPeer($Class* class$) {
	{
		GtkFileDialogPeer::initIDs();
	}
}

GtkFileDialogPeer::GtkFileDialogPeer() {
}

$Class* GtkFileDialogPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GtkFileDialogPeer$$Lambda$lambda$setVisible$0::classInfo$.name)) {
			return GtkFileDialogPeer$$Lambda$lambda$setVisible$0::load$(name, initialize);
		}
	}
	$loadClass(GtkFileDialogPeer, name, initialize, &_GtkFileDialogPeer_ClassInfo_, clinit$GtkFileDialogPeer, allocate$GtkFileDialogPeer);
	return class$;
}

$Class* GtkFileDialogPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun