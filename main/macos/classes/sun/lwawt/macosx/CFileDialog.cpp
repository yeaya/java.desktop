#include <sun/lwawt/macosx/CFileDialog.h>

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
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/List.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/macosx/CFileDialog$Task.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

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
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $List = ::java::util::List;
using $Region = ::sun::java2d::pipe::Region;
using $CFileDialog$Task = ::sun::lwawt::macosx::CFileDialog$Task;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CFileDialog_FieldInfo_[] = {
	{"target", "Ljava/awt/FileDialog;", nullptr, $PRIVATE | $FINAL, $field(CFileDialog, target)},
	{}
};

$MethodInfo _CFileDialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/FileDialog;)V", nullptr, 0, $method(static_cast<void(CFileDialog::*)($FileDialog*)>(&CFileDialog::init$))},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"beginLayout", "()V", nullptr, $PUBLIC},
	{"beginValidate", "()V", nullptr, $PUBLIC},
	{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", $PUBLIC},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"destroyBuffers", "()V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"endLayout", "()V", nullptr, $PUBLIC},
	{"endValidate", "()V", nullptr, $PUBLIC},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isObscured", "()Z", nullptr, $PUBLIC},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC},
	{"nativeRunFileDialog", "(Ljava/lang/String;IZZZZLjava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$StringArray*(CFileDialog::*)($String*,int32_t,bool,bool,bool,bool,$String*,$String*)>(&CFileDialog::nativeRunFileDialog))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"queryFilenameFilter", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CFileDialog::*)($String*)>(&CFileDialog::queryFilenameFilter))},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFile", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFilenameFilter", "(Ljava/io/FilenameFilter;)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"updateWindow", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeRunFileDialog 30

$InnerClassInfo _CFileDialog_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CFileDialog$Task", "sun.lwawt.macosx.CFileDialog", "Task", $PRIVATE},
	{}
};

$ClassInfo _CFileDialog_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CFileDialog",
	"java.lang.Object",
	"java.awt.peer.FileDialogPeer",
	_CFileDialog_FieldInfo_,
	_CFileDialog_MethodInfo_,
	nullptr,
	nullptr,
	_CFileDialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CFileDialog$Task"
};

$Object* allocate$CFileDialog($Class* clazz) {
	return $of($alloc(CFileDialog));
}

void CFileDialog::init$($FileDialog* target) {
	$set(this, target, target);
}

void CFileDialog::dispose() {
	$LWCToolkit::targetDisposedPeer(this->target, this);
}

void CFileDialog::setVisible(bool visible) {
	$useLocalCurrentObjectStackCache();
	if (visible) {
		$$new($Thread, nullptr, $$new($CFileDialog$Task, this), "FileDialog"_s, 0, false)->start();
	}
}

bool CFileDialog::queryFilenameFilter($String* inFilename) {
	$useLocalCurrentObjectStackCache();
	bool ret = false;
	$var($FilenameFilter, ff, $nc(this->target)->getFilenameFilter());
	$var($File, fileObj, $new($File, inFilename));
	if (!fileObj->isDirectory()) {
		$var($File, directoryObj, $new($File, $(fileObj->getParent())));
		$var($String, nameOnly, fileObj->getName());
		ret = $nc(ff)->accept(directoryObj, nameOnly);
	}
	return ret;
}

$StringArray* CFileDialog::nativeRunFileDialog($String* title, int32_t mode, bool multipleMode, bool shouldNavigateApps, bool canChooseDirectories, bool hasFilenameFilter, $String* directory, $String* file) {
	$var($StringArray, $ret, nullptr);
	$prepareNative(CFileDialog, nativeRunFileDialog, $StringArray*, $String* title, int32_t mode, bool multipleMode, bool shouldNavigateApps, bool canChooseDirectories, bool hasFilenameFilter, $String* directory, $String* file);
	$assign($ret, $invokeNativeObject(title, mode, multipleMode, shouldNavigateApps, canChooseDirectories, hasFilenameFilter, directory, file));
	$finishNative();
	return $ret;
}

void CFileDialog::setDirectory($String* dir) {
}

void CFileDialog::setFile($String* file) {
}

void CFileDialog::setFilenameFilter($FilenameFilter* filter) {
}

void CFileDialog::blockWindows($List* windows) {
}

void CFileDialog::setResizable(bool resizeable) {
}

void CFileDialog::setTitle($String* title) {
}

void CFileDialog::repositionSecurityWarning() {
}

void CFileDialog::updateAlwaysOnTopState() {
}

void CFileDialog::setModalBlocked($Dialog* blocker, bool blocked) {
}

void CFileDialog::setOpacity(float opacity) {
}

void CFileDialog::setOpaque(bool isOpaque) {
}

void CFileDialog::toBack() {
}

void CFileDialog::toFront() {
}

void CFileDialog::updateFocusableWindowState() {
}

void CFileDialog::updateIconImages() {
}

void CFileDialog::updateMinimumSize() {
}

void CFileDialog::updateWindow() {
}

void CFileDialog::beginLayout() {
}

void CFileDialog::beginValidate() {
}

void CFileDialog::endLayout() {
}

void CFileDialog::endValidate() {
}

$Insets* CFileDialog::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

void CFileDialog::applyShape($Region* shape) {
}

bool CFileDialog::canDetermineObscurity() {
	return false;
}

void CFileDialog::coalescePaintEvent($PaintEvent* e) {
}

void CFileDialog::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
}

$Image* CFileDialog::createImage(int32_t width, int32_t height) {
	return nullptr;
}

$VolatileImage* CFileDialog::createVolatileImage(int32_t width, int32_t height) {
	return nullptr;
}

void CFileDialog::destroyBuffers() {
}

void CFileDialog::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
}

$Image* CFileDialog::getBackBuffer() {
	return nullptr;
}

$ColorModel* CFileDialog::getColorModel() {
	return nullptr;
}

$FontMetrics* CFileDialog::getFontMetrics($Font* font) {
	return nullptr;
}

$Graphics* CFileDialog::getGraphics() {
	return nullptr;
}

$GraphicsConfiguration* CFileDialog::getGraphicsConfiguration() {
	return nullptr;
}

$Point* CFileDialog::getLocationOnScreen() {
	return nullptr;
}

$Dimension* CFileDialog::getMinimumSize() {
	return $nc(this->target)->getSize();
}

$Dimension* CFileDialog::getPreferredSize() {
	return getMinimumSize();
}

void CFileDialog::handleEvent($AWTEvent* e) {
}

bool CFileDialog::handlesWheelScrolling() {
	return false;
}

bool CFileDialog::isFocusable() {
	return false;
}

bool CFileDialog::isObscured() {
	return false;
}

bool CFileDialog::isReparentSupported() {
	return false;
}

void CFileDialog::layout() {
}

void CFileDialog::paint($Graphics* g) {
}

void CFileDialog::print($Graphics* g) {
}

void CFileDialog::reparent($ContainerPeer* newContainer) {
}

bool CFileDialog::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	return false;
}

void CFileDialog::setBackground($Color* c) {
}

void CFileDialog::setForeground($Color* c) {
}

void CFileDialog::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
}

void CFileDialog::setEnabled(bool e) {
}

void CFileDialog::setFont($Font* f) {
}

void CFileDialog::setZOrder($ComponentPeer* above) {
}

void CFileDialog::updateCursorImmediately() {
}

bool CFileDialog::updateGraphicsData($GraphicsConfiguration* gc) {
	return false;
}

CFileDialog::CFileDialog() {
}

$Class* CFileDialog::load$($String* name, bool initialize) {
	$loadClass(CFileDialog, name, initialize, &_CFileDialog_ClassInfo_, allocate$CFileDialog);
	return class$;
}

$Class* CFileDialog::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun