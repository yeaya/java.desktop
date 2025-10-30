#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener.h>

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
#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener$1.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
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
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthLookAndFeel$AATextListener$1 = ::javax::swing::plaf::synth::SynthLookAndFeel$AATextListener$1;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthLookAndFeel$AATextListener_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthLookAndFeel$AATextListener, key)},
	{"updatePending", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SynthLookAndFeel$AATextListener, updatePending)},
	{}
};

$MethodInfo _SynthLookAndFeel$AATextListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/LookAndFeel;)V", nullptr, 0, $method(static_cast<void(SynthLookAndFeel$AATextListener::*)($LookAndFeel*)>(&SynthLookAndFeel$AATextListener::init$))},
	{"dispose", "()V", nullptr, 0},
	{"isUpdatePending", "()Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&SynthLookAndFeel$AATextListener::isUpdatePending))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setUpdatePending", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(bool)>(&SynthLookAndFeel$AATextListener::setUpdatePending))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAllUIs", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SynthLookAndFeel$AATextListener::updateAllUIs))},
	{"updateUI", "()V", nullptr, $PROTECTED},
	{"updateWindowUI", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&SynthLookAndFeel$AATextListener::updateWindowUI))},
	{}
};

$InnerClassInfo _SynthLookAndFeel$AATextListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener", "javax.swing.plaf.synth.SynthLookAndFeel", "AATextListener", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthLookAndFeel$AATextListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener",
	"java.lang.ref.WeakReference",
	"java.beans.PropertyChangeListener",
	_SynthLookAndFeel$AATextListener_FieldInfo_,
	_SynthLookAndFeel$AATextListener_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljavax/swing/LookAndFeel;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_SynthLookAndFeel$AATextListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthLookAndFeel"
};

$Object* allocate$SynthLookAndFeel$AATextListener($Class* clazz) {
	return $of($alloc(SynthLookAndFeel$AATextListener));
}

$Object* SynthLookAndFeel$AATextListener::clone() {
	 return this->$WeakReference::clone();
}

int32_t SynthLookAndFeel$AATextListener::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool SynthLookAndFeel$AATextListener::equals(Object$* arg0) {
	 return this->$WeakReference::equals(arg0);
}

$String* SynthLookAndFeel$AATextListener::toString() {
	 return this->$WeakReference::toString();
}

void SynthLookAndFeel$AATextListener::finalize() {
	this->$WeakReference::finalize();
}

bool SynthLookAndFeel$AATextListener::updatePending = false;

void SynthLookAndFeel$AATextListener::init$($LookAndFeel* laf) {
	$init($SynthLookAndFeel);
	$WeakReference::init$(laf, $SynthLookAndFeel::queue);
	$init($SunToolkit);
	$set(this, key, $SunToolkit::DESKTOPFONTHINTS);
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$nc(tk)->addPropertyChangeListener(this->key, this);
}

void SynthLookAndFeel$AATextListener::propertyChange($PropertyChangeEvent* pce) {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, defaults, $UIManager::getLookAndFeelDefaults());
	if ($nc(defaults)->getBoolean("Synth.doNotSetTextAA"_s)) {
		dispose();
		return;
	}
	$var($LookAndFeel, laf, $cast($LookAndFeel, get()));
	if (laf == nullptr || laf != $UIManager::getLookAndFeel()) {
		dispose();
		return;
	}
	$SwingUtilities2::putAATextInfo($SynthLookAndFeel::useLAFConditions(), defaults);
	updateUI();
}

void SynthLookAndFeel$AATextListener::dispose() {
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$nc(tk)->removePropertyChangeListener(this->key, this);
}

void SynthLookAndFeel$AATextListener::updateWindowUI($Window* window) {
	$init(SynthLookAndFeel$AATextListener);
	$useLocalCurrentObjectStackCache();
	$SynthLookAndFeel::updateStyles(window);
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

void SynthLookAndFeel$AATextListener::updateAllUIs() {
	$init(SynthLookAndFeel$AATextListener);
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

void SynthLookAndFeel$AATextListener::setUpdatePending(bool update) {
	$load(SynthLookAndFeel$AATextListener);
	$synchronized(class$) {
		$init(SynthLookAndFeel$AATextListener);
		SynthLookAndFeel$AATextListener::updatePending = update;
	}
}

bool SynthLookAndFeel$AATextListener::isUpdatePending() {
	$load(SynthLookAndFeel$AATextListener);
	$synchronized(class$) {
		$init(SynthLookAndFeel$AATextListener);
		return SynthLookAndFeel$AATextListener::updatePending;
	}
}

void SynthLookAndFeel$AATextListener::updateUI() {
	if (!isUpdatePending()) {
		setUpdatePending(true);
		$var($Runnable, uiUpdater, $new($SynthLookAndFeel$AATextListener$1, this));
		$SwingUtilities::invokeLater(uiUpdater);
	}
}

SynthLookAndFeel$AATextListener::SynthLookAndFeel$AATextListener() {
}

$Class* SynthLookAndFeel$AATextListener::load$($String* name, bool initialize) {
	$loadClass(SynthLookAndFeel$AATextListener, name, initialize, &_SynthLookAndFeel$AATextListener_ClassInfo_, allocate$SynthLookAndFeel$AATextListener);
	return class$;
}

$Class* SynthLookAndFeel$AATextListener::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax