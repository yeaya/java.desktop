#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener$1.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DESKTOPFONTHINTS

using $FrameArray = $Array<::java::awt::Frame>;
using $WindowArray = $Array<::java::awt::Window>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalLookAndFeel$AATextListener$1 = ::javax::swing::plaf::metal::MetalLookAndFeel$AATextListener$1;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalLookAndFeel$AATextListener_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalLookAndFeel$AATextListener, key)},
	{"updatePending", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel$AATextListener, updatePending)},
	{}
};

$MethodInfo _MetalLookAndFeel$AATextListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/LookAndFeel;)V", nullptr, 0, $method(static_cast<void(MetalLookAndFeel$AATextListener::*)($LookAndFeel*)>(&MetalLookAndFeel$AATextListener::init$))},
	{"dispose", "()V", nullptr, 0},
	{"isUpdatePending", "()Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&MetalLookAndFeel$AATextListener::isUpdatePending))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setUpdatePending", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(bool)>(&MetalLookAndFeel$AATextListener::setUpdatePending))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAllUIs", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MetalLookAndFeel$AATextListener::updateAllUIs))},
	{"updateUI", "()V", nullptr, $PROTECTED},
	{"updateWindowUI", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&MetalLookAndFeel$AATextListener::updateWindowUI))},
	{}
};

$InnerClassInfo _MetalLookAndFeel$AATextListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener", "javax.swing.plaf.metal.MetalLookAndFeel", "AATextListener", $STATIC},
	{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalLookAndFeel$AATextListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener",
	"java.lang.ref.WeakReference",
	"java.beans.PropertyChangeListener",
	_MetalLookAndFeel$AATextListener_FieldInfo_,
	_MetalLookAndFeel$AATextListener_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljavax/swing/LookAndFeel;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_MetalLookAndFeel$AATextListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalLookAndFeel"
};

$Object* allocate$MetalLookAndFeel$AATextListener($Class* clazz) {
	return $of($alloc(MetalLookAndFeel$AATextListener));
}

$Object* MetalLookAndFeel$AATextListener::clone() {
	 return this->$WeakReference::clone();
}

int32_t MetalLookAndFeel$AATextListener::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool MetalLookAndFeel$AATextListener::equals(Object$* arg0) {
	 return this->$WeakReference::equals(arg0);
}

$String* MetalLookAndFeel$AATextListener::toString() {
	 return this->$WeakReference::toString();
}

void MetalLookAndFeel$AATextListener::finalize() {
	this->$WeakReference::finalize();
}

bool MetalLookAndFeel$AATextListener::updatePending = false;

void MetalLookAndFeel$AATextListener::init$($LookAndFeel* laf) {
	$init($MetalLookAndFeel);
	$WeakReference::init$(laf, $MetalLookAndFeel::queue);
	$init($SunToolkit);
	$set(this, key, $SunToolkit::DESKTOPFONTHINTS);
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$nc(tk)->addPropertyChangeListener(this->key, this);
}

void MetalLookAndFeel$AATextListener::propertyChange($PropertyChangeEvent* pce) {
	$useLocalCurrentObjectStackCache();
	$var($LookAndFeel, laf, $cast($LookAndFeel, get()));
	if (laf == nullptr || laf != $UIManager::getLookAndFeel()) {
		dispose();
		return;
	}
	$var($UIDefaults, defaults, $UIManager::getLookAndFeelDefaults());
	bool lafCond = $SwingUtilities2::isLocalDisplay();
	$SwingUtilities2::putAATextInfo(lafCond, defaults);
	updateUI();
}

void MetalLookAndFeel$AATextListener::dispose() {
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$nc(tk)->removePropertyChangeListener(this->key, this);
}

void MetalLookAndFeel$AATextListener::updateWindowUI($Window* window) {
	$init(MetalLookAndFeel$AATextListener);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::updateComponentTreeUI(window);
	$var($WindowArray, ownedWins, $nc(window)->getOwnedWindows());
	{
		$var($WindowArray, arr$, ownedWins);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, w, arr$->get(i$));
			{
				updateWindowUI(w);
			}
		}
	}
}

void MetalLookAndFeel$AATextListener::updateAllUIs() {
	$init(MetalLookAndFeel$AATextListener);
	$useLocalCurrentObjectStackCache();
	$var($FrameArray, appFrames, $Frame::getFrames());
	{
		$var($FrameArray, arr$, appFrames);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Frame, frame, arr$->get(i$));
			{
				updateWindowUI(frame);
			}
		}
	}
}

void MetalLookAndFeel$AATextListener::setUpdatePending(bool update) {
	$load(MetalLookAndFeel$AATextListener);
	$synchronized(class$) {
		$init(MetalLookAndFeel$AATextListener);
		MetalLookAndFeel$AATextListener::updatePending = update;
	}
}

bool MetalLookAndFeel$AATextListener::isUpdatePending() {
	$load(MetalLookAndFeel$AATextListener);
	$synchronized(class$) {
		$init(MetalLookAndFeel$AATextListener);
		return MetalLookAndFeel$AATextListener::updatePending;
	}
}

void MetalLookAndFeel$AATextListener::updateUI() {
	if (!isUpdatePending()) {
		setUpdatePending(true);
		$var($Runnable, uiUpdater, $new($MetalLookAndFeel$AATextListener$1, this));
		$SwingUtilities::invokeLater(uiUpdater);
	}
}

MetalLookAndFeel$AATextListener::MetalLookAndFeel$AATextListener() {
}

$Class* MetalLookAndFeel$AATextListener::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$AATextListener, name, initialize, &_MetalLookAndFeel$AATextListener_ClassInfo_, allocate$MetalLookAndFeel$AATextListener);
	return class$;
}

$Class* MetalLookAndFeel$AATextListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax