#include <javax/swing/JDesktopPane.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/TreeSet.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane$1.h>
#include <javax/swing/JDesktopPane$AccessibleJDesktopPane.h>
#include <javax/swing/JDesktopPane$ComponentPosition.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <jcpp.h>

#undef FALSE
#undef LIVE_DRAG_MODE
#undef OUTLINE_DRAG_MODE
#undef TRUE

using $JInternalFrameArray = $Array<::javax::swing::JInternalFrame>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $TreeSet = ::java::util::TreeSet;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $DesktopManager = ::javax::swing::DesktopManager;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JDesktopPane$1 = ::javax::swing::JDesktopPane$1;
using $JDesktopPane$AccessibleJDesktopPane = ::javax::swing::JDesktopPane$AccessibleJDesktopPane;
using $JDesktopPane$ComponentPosition = ::javax::swing::JDesktopPane$ComponentPosition;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;
using $SortingFocusTraversalPolicy = ::javax::swing::SortingFocusTraversalPolicy;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;

namespace javax {
	namespace swing {

$NamedAttribute JDesktopPane_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{}
};
$CompoundAttribute _JDesktopPane_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JDesktopPane_Attribute_var$0},
	{}
};

$NamedAttribute JDesktopPane_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JDesktopPane_MethodAnnotations_getAccessibleContext3[] = {
	{"Ljava/beans/BeanProperty;", JDesktopPane_Attribute_var$1},
	{}
};

$NamedAttribute JDesktopPane_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JDesktopPane_MethodAnnotations_getAllFrames4[] = {
	{"Ljava/beans/BeanProperty;", JDesktopPane_Attribute_var$2},
	{}
};

$NamedAttribute JDesktopPane_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JDesktopPane_MethodAnnotations_getUIClassID15[] = {
	{"Ljava/beans/BeanProperty;", JDesktopPane_Attribute_var$3},
	{}
};

$NamedAttribute JDesktopPane_Attribute_var$4[] = {
	{"description", 's', "Desktop manager to handle the internal frames in the desktop pane."},
	{}
};

$CompoundAttribute _JDesktopPane_MethodAnnotations_setDesktopManager23[] = {
	{"Ljava/beans/BeanProperty;", JDesktopPane_Attribute_var$4},
	{}
};

$Attribute JDesktopPane_Attribute_var$6[] = {
	{'s', "JDesktopPane.LIVE_DRAG_MODE"},
	{'s', "JDesktopPane.OUTLINE_DRAG_MODE"},
	{'-'}
};

$NamedAttribute JDesktopPane_Attribute_var$5[] = {
	{"enumerationValues", '[', JDesktopPane_Attribute_var$6},
	{"description", 's', "Dragging style for internal frame children."},
	{}
};

$CompoundAttribute _JDesktopPane_MethodAnnotations_setDragMode24[] = {
	{"Ljava/beans/BeanProperty;", JDesktopPane_Attribute_var$5},
	{}
};

$NamedAttribute JDesktopPane_Attribute_var$7[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JDesktopPane_MethodAnnotations_setUI26[] = {
	{"Ljava/beans/BeanProperty;", JDesktopPane_Attribute_var$7},
	{}
};


$FieldInfo _JDesktopPane_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JDesktopPane, uiClassID)},
	{"desktopManager", "Ljavax/swing/DesktopManager;", nullptr, $TRANSIENT, $field(JDesktopPane, desktopManager)},
	{"selectedFrame", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $TRANSIENT, $field(JDesktopPane, selectedFrame)},
	{"LIVE_DRAG_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JDesktopPane, LIVE_DRAG_MODE)},
	{"OUTLINE_DRAG_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JDesktopPane, OUTLINE_DRAG_MODE)},
	{"dragMode", "I", nullptr, $PRIVATE, $field(JDesktopPane, dragMode)},
	{"dragModeSet", "Z", nullptr, $PRIVATE, $field(JDesktopPane, dragModeSet)},
	{"framesCache", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/JInternalFrame;>;", $PRIVATE | $TRANSIENT, $field(JDesktopPane, framesCache)},
	{"componentOrderCheckingEnabled", "Z", nullptr, $PRIVATE, $field(JDesktopPane, componentOrderCheckingEnabled)},
	{"componentOrderChanged", "Z", nullptr, $PRIVATE, $field(JDesktopPane, componentOrderChanged)},
	{}
};

$MethodInfo _JDesktopPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JDesktopPane::*)()>(&JDesktopPane::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"checkComponentAttributes", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(JDesktopPane::*)($Component*)>(&JDesktopPane::checkComponentAttributes))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDesktopPane_MethodAnnotations_getAccessibleContext3},
	{"getAllFrames", "()[Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDesktopPane_MethodAnnotations_getAllFrames4},
	{"getAllFrames", "(Ljava/awt/Container;)Ljava/util/Collection;", "(Ljava/awt/Container;)Ljava/util/Collection<Ljavax/swing/JInternalFrame;>;", $PRIVATE | $STATIC, $method(static_cast<$Collection*(*)($Container*)>(&JDesktopPane::getAllFrames))},
	{"getAllFramesInLayer", "(I)[Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC},
	{"getDesktopManager", "()Ljavax/swing/DesktopManager;", nullptr, $PUBLIC},
	{"getDragMode", "()I", nullptr, $PUBLIC},
	{"getFrames", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/swing/JInternalFrame;>;", $PRIVATE, $method(static_cast<$List*(JDesktopPane::*)()>(&JDesktopPane::getFrames))},
	{"getNextFrame", "(Ljavax/swing/JInternalFrame;Z)Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $method(static_cast<$JInternalFrame*(JDesktopPane::*)($JInternalFrame*,bool)>(&JDesktopPane::getNextFrame))},
	{"getNextFrame", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JInternalFrame;", nullptr, 0},
	{"getSelectedFrame", "()Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC},
	{"getTopInternalFrame", "()Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $method(static_cast<$JInternalFrame*(JDesktopPane::*)()>(&JDesktopPane::getTopInternalFrame))},
	{"getUI", "()Ljavax/swing/plaf/DesktopPaneUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDesktopPane_MethodAnnotations_getUIClassID15},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"selectFrame", "(Z)Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC},
	{"setComponentOrderCheckingEnabled", "(Z)V", nullptr, 0},
	{"setComponentZOrder", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC},
	{"setDesktopManager", "(Ljavax/swing/DesktopManager;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDesktopPane_MethodAnnotations_setDesktopManager23},
	{"setDragMode", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDesktopPane_MethodAnnotations_setDragMode24},
	{"setSelectedFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"setUI", "(Ljavax/swing/plaf/DesktopPaneUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JDesktopPane_MethodAnnotations_setUI26},
	{"setUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0},
	{"updateFramesCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(JDesktopPane::*)()>(&JDesktopPane::updateFramesCache))},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"verifyFramesCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(JDesktopPane::*)()>(&JDesktopPane::verifyFramesCache))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JDesktopPane::*)($ObjectOutputStream*)>(&JDesktopPane::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JDesktopPane_InnerClassesInfo_[] = {
	{"javax.swing.JDesktopPane$AccessibleJDesktopPane", "javax.swing.JDesktopPane", "AccessibleJDesktopPane", $PROTECTED},
	{"javax.swing.JDesktopPane$ComponentPosition", "javax.swing.JDesktopPane", "ComponentPosition", $PRIVATE | $STATIC},
	{"javax.swing.JDesktopPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JDesktopPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JDesktopPane",
	"javax.swing.JLayeredPane",
	nullptr,
	_JDesktopPane_FieldInfo_,
	_JDesktopPane_MethodInfo_,
	nullptr,
	nullptr,
	_JDesktopPane_InnerClassesInfo_,
	_JDesktopPane_Annotations_,
	nullptr,
	"javax.swing.JDesktopPane$AccessibleJDesktopPane,javax.swing.JDesktopPane$ComponentPosition,javax.swing.JDesktopPane$1"
};

$Object* allocate$JDesktopPane($Class* clazz) {
	return $of($alloc(JDesktopPane));
}


$String* JDesktopPane::uiClassID = nullptr;

void JDesktopPane::init$() {
	$JLayeredPane::init$();
	$set(this, selectedFrame, nullptr);
	this->dragMode = JDesktopPane::LIVE_DRAG_MODE;
	this->dragModeSet = false;
	this->componentOrderCheckingEnabled = true;
	this->componentOrderChanged = false;
	$init($Boolean);
	setUIProperty("opaque"_s, $Boolean::TRUE);
	setFocusCycleRoot(true);
	setFocusTraversalPolicy($$new($JDesktopPane$1, this));
	updateUI();
}

$ComponentUI* JDesktopPane::getUI() {
	return $cast($DesktopPaneUI, this->ui);
}

void JDesktopPane::setUI($DesktopPaneUI* ui) {
	$JLayeredPane::setUI(ui);
}

void JDesktopPane::setDragMode(int32_t dragMode) {
	int32_t oldDragMode = this->dragMode;
	this->dragMode = dragMode;
	firePropertyChange("dragMode"_s, oldDragMode, this->dragMode);
	this->dragModeSet = true;
}

int32_t JDesktopPane::getDragMode() {
	return this->dragMode;
}

$DesktopManager* JDesktopPane::getDesktopManager() {
	return this->desktopManager;
}

void JDesktopPane::setDesktopManager($DesktopManager* d) {
	$var($DesktopManager, oldValue, this->desktopManager);
	$set(this, desktopManager, d);
	firePropertyChange("desktopManager"_s, $of(oldValue), $of(this->desktopManager));
}

void JDesktopPane::updateUI() {
	setUI($cast($DesktopPaneUI, $($UIManager::getUI(this))));
}

$String* JDesktopPane::getUIClassID() {
	return JDesktopPane::uiClassID;
}

$JInternalFrameArray* JDesktopPane::getAllFrames() {
	return $fcast($JInternalFrameArray, $nc($(getAllFrames(this)))->toArray($$new($JInternalFrameArray, 0)));
}

$Collection* JDesktopPane::getAllFrames($Container* parent) {
	$init(JDesktopPane);
	int32_t i = 0;
	int32_t count = 0;
	$var($Collection, results, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>($new($LinkedHashSet))))));
	count = $nc(parent)->getComponentCount();
	for (i = 0; i < count; ++i) {
		$var($Component, next, parent->getComponent(i));
		if ($instanceOf($JInternalFrame, next)) {
			results->add($cast($JInternalFrame, next));
		} else if ($instanceOf($JInternalFrame$JDesktopIcon, next)) {
			$var($JInternalFrame, tmp, $nc(($cast($JInternalFrame$JDesktopIcon, next)))->getInternalFrame());
			if (tmp != nullptr) {
				results->add(tmp);
			}
		} else if ($instanceOf($Container, next)) {
			results->addAll($(getAllFrames($cast($Container, next))));
		}
	}
	return results;
}

$JInternalFrame* JDesktopPane::getSelectedFrame() {
	return this->selectedFrame;
}

void JDesktopPane::setSelectedFrame($JInternalFrame* f) {
	$set(this, selectedFrame, f);
}

$JInternalFrameArray* JDesktopPane::getAllFramesInLayer(int32_t layer) {
	$var($Collection, allFrames, getAllFrames(this));
	$var($Iterator, iterator, $nc(allFrames)->iterator());
	while ($nc(iterator)->hasNext()) {
		if ($nc(($cast($JInternalFrame, $(iterator->next()))))->getLayer() != layer) {
			iterator->remove();
		}
	}
	return $fcast($JInternalFrameArray, allFrames->toArray($$new($JInternalFrameArray, 0)));
}

$List* JDesktopPane::getFrames() {
	$var($Component, c, nullptr);
	$var($Set, set, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet))));
	for (int32_t i = 0; i < getComponentCount(); ++i) {
		$assign(c, getComponent(i));
		if ($instanceOf($JInternalFrame, c)) {
			set->add($$new($JDesktopPane$ComponentPosition, $cast($JInternalFrame, c), getLayer(c), i));
		} else if ($instanceOf($JInternalFrame$JDesktopIcon, c)) {
			$assign(c, $nc(($cast($JInternalFrame$JDesktopIcon, c)))->getInternalFrame());
			set->add($$new($JDesktopPane$ComponentPosition, $cast($JInternalFrame, c), getLayer(c), i));
		}
	}
	$var($List, frames, $new($ArrayList, set->size()));
	{
		$var($Iterator, i$, set->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JDesktopPane$ComponentPosition, position, $cast($JDesktopPane$ComponentPosition, i$->next()));
			{
				frames->add($nc(position)->component);
			}
		}
	}
	return frames;
}

$JInternalFrame* JDesktopPane::getNextFrame($JInternalFrame* f, bool forward) {
	verifyFramesCache();
	if (f == nullptr) {
		return getTopInternalFrame();
	}
	int32_t i = $nc(this->framesCache)->indexOf(f);
	if (i == -1 || $nc(this->framesCache)->size() == 1) {
		return nullptr;
	}
	if (forward) {
		if (++i == $nc(this->framesCache)->size()) {
			i = 0;
		}
	} else if (--i == -1) {
		i = $nc(this->framesCache)->size() - 1;
	}
	return $cast($JInternalFrame, $nc(this->framesCache)->get(i));
}

$JInternalFrame* JDesktopPane::getNextFrame($JInternalFrame* f) {
	return getNextFrame(f, true);
}

$JInternalFrame* JDesktopPane::getTopInternalFrame() {
	if ($nc(this->framesCache)->size() == 0) {
		return nullptr;
	}
	return $cast($JInternalFrame, $nc(this->framesCache)->get(0));
}

void JDesktopPane::updateFramesCache() {
	$set(this, framesCache, getFrames());
}

void JDesktopPane::verifyFramesCache() {
	if (this->componentOrderChanged) {
		this->componentOrderChanged = false;
		updateFramesCache();
	}
}

void JDesktopPane::remove($Component* comp) {
	$JLayeredPane::remove(comp);
	updateFramesCache();
}

$JInternalFrame* JDesktopPane::selectFrame(bool forward) {
	$var($JInternalFrame, selectedFrame, getSelectedFrame());
	$var($JInternalFrame, frameToSelect, getNextFrame(selectedFrame, forward));
	if (frameToSelect == nullptr) {
		return nullptr;
	}
	setComponentOrderCheckingEnabled(false);
	if (forward && selectedFrame != nullptr) {
		selectedFrame->moveToBack();
	}
	try {
		$nc(frameToSelect)->setSelected(true);
	} catch ($PropertyVetoException&) {
		$catch();
	}
	setComponentOrderCheckingEnabled(true);
	return frameToSelect;
}

void JDesktopPane::setComponentOrderCheckingEnabled(bool enable) {
	this->componentOrderCheckingEnabled = enable;
}

void JDesktopPane::addImpl($Component* comp, Object$* constraints, int32_t index) {
	checkComponentAttributes(comp);
	$JLayeredPane::addImpl(comp, constraints, index);
	if (this->componentOrderCheckingEnabled) {
		if ($instanceOf($JInternalFrame, comp) || $instanceOf($JInternalFrame$JDesktopIcon, comp)) {
			this->componentOrderChanged = true;
		}
	}
}

void JDesktopPane::checkComponentAttributes($Component* comp) {
	if ($instanceOf($JInternalFrame, comp) && $nc(($cast($JInternalFrame, comp)))->isIcon()) {
		$init($Boolean);
		($cast($JInternalFrame, comp))->putClientProperty("wasIconOnce"_s, $Boolean::FALSE);
	}
}

void JDesktopPane::remove(int32_t index) {
	if (this->componentOrderCheckingEnabled) {
		$var($Component, comp, getComponent(index));
		if ($instanceOf($JInternalFrame, comp) || $instanceOf($JInternalFrame$JDesktopIcon, comp)) {
			this->componentOrderChanged = true;
		}
	}
	$JLayeredPane::remove(index);
}

void JDesktopPane::removeAll() {
	if (this->componentOrderCheckingEnabled) {
		int32_t count = getComponentCount();
		for (int32_t i = 0; i < count; ++i) {
			$var($Component, comp, getComponent(i));
			if ($instanceOf($JInternalFrame, comp) || $instanceOf($JInternalFrame$JDesktopIcon, comp)) {
				this->componentOrderChanged = true;
				break;
			}
		}
	}
	$JLayeredPane::removeAll();
}

void JDesktopPane::setComponentZOrder($Component* comp, int32_t index) {
	$JLayeredPane::setComponentZOrder(comp, index);
	if (this->componentOrderCheckingEnabled) {
		if ($instanceOf($JInternalFrame, comp) || $instanceOf($JInternalFrame$JDesktopIcon, comp)) {
			this->componentOrderChanged = true;
		}
	}
}

void JDesktopPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JDesktopPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

void JDesktopPane::setUIProperty($String* propertyName, Object$* value) {
	if (propertyName == "dragMode"_s) {
		if (!this->dragModeSet) {
			setDragMode($nc(($cast($Integer, value)))->intValue());
			this->dragModeSet = false;
		}
	} else {
		$JLayeredPane::setUIProperty(propertyName, value);
	}
}

$String* JDesktopPane::paramString() {
	$var($String, desktopManagerString, this->desktopManager != nullptr ? $nc($of(this->desktopManager))->toString() : ""_s);
	return $str({$($JLayeredPane::paramString()), ",desktopManager="_s, desktopManagerString});
}

$AccessibleContext* JDesktopPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JDesktopPane$AccessibleJDesktopPane, this));
	}
	return this->accessibleContext;
}

JDesktopPane::JDesktopPane() {
}

void clinit$JDesktopPane($Class* class$) {
	$assignStatic(JDesktopPane::uiClassID, "DesktopPaneUI"_s);
}

$Class* JDesktopPane::load$($String* name, bool initialize) {
	$loadClass(JDesktopPane, name, initialize, &_JDesktopPane_ClassInfo_, clinit$JDesktopPane, allocate$JDesktopPane);
	return class$;
}

$Class* JDesktopPane::class$ = nullptr;

	} // swing
} // javax