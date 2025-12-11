#include <javax/swing/JLayeredPane.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/util/ArrayList.h>
#include <java/util/Hashtable.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane$AccessibleJLayeredPane.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef DEFAULT_LAYER
#undef DRAG_LAYER
#undef FRAME_CONTENT_LAYER
#undef LAYER_PROPERTY
#undef MODAL_LAYER
#undef PALETTE_LAYER
#undef POPUP_LAYER

using $ComponentArray = $Array<::java::awt::Component>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ArrayList = ::java::util::ArrayList;
using $Hashtable = ::java::util::Hashtable;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLayeredPane$AccessibleJLayeredPane = ::javax::swing::JLayeredPane$AccessibleJLayeredPane;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$NamedAttribute JLayeredPane_Attribute_var$0[] = {
	{"defaultProperty", 's', "accessibleContext"},
	{}
};

$CompoundAttribute _JLayeredPane_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JLayeredPane_Attribute_var$0},
	{}
};

$NamedAttribute JLayeredPane_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JLayeredPane_MethodAnnotations_getAccessibleContext2[] = {
	{"Ljava/beans/BeanProperty;", JLayeredPane_Attribute_var$1},
	{}
};

$NamedAttribute JLayeredPane_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JLayeredPane_MethodAnnotations_isOptimizedDrawingEnabled15[] = {
	{"Ljava/beans/BeanProperty;", JLayeredPane_Attribute_var$2},
	{}
};

$FieldInfo _JLayeredPane_FieldInfo_[] = {
	{"DEFAULT_LAYER", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JLayeredPane, DEFAULT_LAYER)},
	{"PALETTE_LAYER", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JLayeredPane, PALETTE_LAYER)},
	{"MODAL_LAYER", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JLayeredPane, MODAL_LAYER)},
	{"POPUP_LAYER", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JLayeredPane, POPUP_LAYER)},
	{"DRAG_LAYER", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JLayeredPane, DRAG_LAYER)},
	{"FRAME_CONTENT_LAYER", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JLayeredPane, FRAME_CONTENT_LAYER)},
	{"LAYER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JLayeredPane, LAYER_PROPERTY)},
	{"componentToLayer", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/awt/Component;Ljava/lang/Integer;>;", $PRIVATE, $field(JLayeredPane, componentToLayer)},
	{"optimizedDrawingPossible", "Z", nullptr, $PRIVATE, $field(JLayeredPane, optimizedDrawingPossible)},
	{}
};

$MethodInfo _JLayeredPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JLayeredPane::*)()>(&JLayeredPane::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JLayeredPane_MethodAnnotations_getAccessibleContext2},
	{"getComponentCountInLayer", "(I)I", nullptr, $PUBLIC},
	{"getComponentToLayer", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/awt/Component;Ljava/lang/Integer;>;", $PROTECTED},
	{"getComponentsInLayer", "(I)[Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getIndexOf", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getLayer", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JComponent*)>(&JLayeredPane::getLayer))},
	{"getLayer", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getLayeredPaneAbove", "(Ljava/awt/Component;)Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JLayeredPane*(*)($Component*)>(&JLayeredPane::getLayeredPaneAbove))},
	{"getObjectForLayer", "(I)Ljava/lang/Integer;", nullptr, $PROTECTED},
	{"getPosition", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"highestLayer", "()I", nullptr, $PUBLIC},
	{"insertIndexForLayer", "(II)I", nullptr, $PROTECTED},
	{"insertIndexForLayer", "(Ljava/awt/Component;II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JLayeredPane::*)($Component*,int32_t,int32_t)>(&JLayeredPane::insertIndexForLayer))},
	{"isOptimizedDrawingEnabled", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JLayeredPane_MethodAnnotations_isOptimizedDrawingEnabled15},
	{"lowestLayer", "()I", nullptr, $PUBLIC},
	{"moveToBack", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"moveToFront", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"putLayer", "(Ljavax/swing/JComponent;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,int32_t)>(&JLayeredPane::putLayer))},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"setLayer", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC},
	{"setLayer", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC},
	{"setPosition", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateOptimizedDrawing", "()V", nullptr, $PRIVATE, $method(static_cast<void(JLayeredPane::*)()>(&JLayeredPane::validateOptimizedDrawing))},
	{}
};

$InnerClassInfo _JLayeredPane_InnerClassesInfo_[] = {
	{"javax.swing.JLayeredPane$AccessibleJLayeredPane", "javax.swing.JLayeredPane", "AccessibleJLayeredPane", $PROTECTED},
	{}
};

$ClassInfo _JLayeredPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JLayeredPane",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JLayeredPane_FieldInfo_,
	_JLayeredPane_MethodInfo_,
	nullptr,
	nullptr,
	_JLayeredPane_InnerClassesInfo_,
	_JLayeredPane_Annotations_,
	nullptr,
	"javax.swing.JLayeredPane$AccessibleJLayeredPane"
};

$Object* allocate$JLayeredPane($Class* clazz) {
	return $of($alloc(JLayeredPane));
}

$String* JLayeredPane::toString() {
	 return this->$JComponent::toString();
}

int32_t JLayeredPane::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JLayeredPane::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JLayeredPane::clone() {
	 return this->$JComponent::clone();
}

void JLayeredPane::finalize() {
	this->$JComponent::finalize();
}

$Integer* JLayeredPane::DEFAULT_LAYER = nullptr;
$Integer* JLayeredPane::PALETTE_LAYER = nullptr;
$Integer* JLayeredPane::MODAL_LAYER = nullptr;
$Integer* JLayeredPane::POPUP_LAYER = nullptr;
$Integer* JLayeredPane::DRAG_LAYER = nullptr;
$Integer* JLayeredPane::FRAME_CONTENT_LAYER = nullptr;
$String* JLayeredPane::LAYER_PROPERTY = nullptr;

void JLayeredPane::init$() {
	$JComponent::init$();
	this->optimizedDrawingPossible = true;
	setLayout(nullptr);
}

void JLayeredPane::validateOptimizedDrawing() {
	$useLocalCurrentObjectStackCache();
	bool layeredComponentFound = false;
	$synchronized(getTreeLock()) {
		$var($Integer, layer, nullptr);
		{
			$var($ComponentArray, arr$, getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, c, arr$->get(i$));
				{
					$assign(layer, nullptr);
					bool var$0 = $SunToolkit::isInstanceOf($of(c), "javax.swing.JInternalFrame"_s);
					if (var$0 || ($instanceOf($JComponent, c) && ($assign(layer, $cast($Integer, $nc(($cast($JComponent, c)))->getClientProperty(JLayeredPane::LAYER_PROPERTY)))) != nullptr)) {
						if (layer != nullptr && layer->equals(JLayeredPane::FRAME_CONTENT_LAYER)) {
							continue;
						}
						layeredComponentFound = true;
						break;
					}
				}
			}
		}
	}
	if (layeredComponentFound) {
		this->optimizedDrawingPossible = false;
	} else {
		this->optimizedDrawingPossible = true;
	}
}

void JLayeredPane::addImpl($Component* comp, Object$* constraints, int32_t index) {
	int32_t layer = 0;
	int32_t pos = 0;
	if ($instanceOf($Integer, constraints)) {
		layer = $nc(($cast($Integer, constraints)))->intValue();
		setLayer(comp, layer);
	} else {
		layer = getLayer(comp);
	}
	pos = insertIndexForLayer(layer, index);
	$JComponent::addImpl(comp, constraints, pos);
	$nc(comp)->validate();
	comp->repaint();
	validateOptimizedDrawing();
}

void JLayeredPane::remove(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, getComponent(index));
	$JComponent::remove(index);
	if (c != nullptr && !($instanceOf($JComponent, c))) {
		$nc($(getComponentToLayer()))->remove(c);
	}
	validateOptimizedDrawing();
}

void JLayeredPane::removeAll() {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, children, getComponents());
	$var($Hashtable, cToL, getComponentToLayer());
	for (int32_t counter = $nc(children)->length - 1; counter >= 0; --counter) {
		$var($Component, c, children->get(counter));
		if (c != nullptr && !($instanceOf($JComponent, c))) {
			$nc(cToL)->remove(c);
		}
	}
	$JComponent::removeAll();
}

bool JLayeredPane::isOptimizedDrawingEnabled() {
	return this->optimizedDrawingPossible;
}

void JLayeredPane::putLayer($JComponent* c, int32_t layer) {
	$init(JLayeredPane);
	$nc(c)->putClientProperty(JLayeredPane::LAYER_PROPERTY, $($Integer::valueOf(layer)));
}

int32_t JLayeredPane::getLayer($JComponent* c) {
	$init(JLayeredPane);
	$var($Integer, i, nullptr);
	if (($assign(i, $cast($Integer, $nc(c)->getClientProperty(JLayeredPane::LAYER_PROPERTY)))) != nullptr) {
		return $nc(i)->intValue();
	}
	return $nc(JLayeredPane::DEFAULT_LAYER)->intValue();
}

JLayeredPane* JLayeredPane::getLayeredPaneAbove($Component* c) {
	$init(JLayeredPane);
	if (c == nullptr) {
		return nullptr;
	}
	$var($Component, parent, $nc(c)->getParent());
	while (parent != nullptr && !($instanceOf(JLayeredPane, parent))) {
		$assign(parent, parent->getParent());
	}
	return $cast(JLayeredPane, parent);
}

void JLayeredPane::setLayer($Component* c, int32_t layer) {
	setLayer(c, layer, -1);
}

void JLayeredPane::setLayer($Component* c, int32_t layer, int32_t position) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, layerObj, nullptr);
	$assign(layerObj, getObjectForLayer(layer));
	bool var$0 = layer == getLayer(c);
	if (var$0 && position == getPosition(c)) {
		repaint($($nc(c)->getBounds()));
		return;
	}
	if ($instanceOf($JComponent, c)) {
		$nc(($cast($JComponent, c)))->putClientProperty(JLayeredPane::LAYER_PROPERTY, layerObj);
	} else {
		$nc($(getComponentToLayer()))->put(c, layerObj);
	}
	bool var$1 = $nc(c)->getParent() == nullptr;
	if (var$1 || !$equals($nc(c)->getParent(), this)) {
		repaint($(c->getBounds()));
		return;
	}
	int32_t index = insertIndexForLayer(c, layer, position);
	setComponentZOrder(c, index);
	repaint($($nc(c)->getBounds()));
}

int32_t JLayeredPane::getLayer($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, i, nullptr);
	if ($instanceOf($JComponent, c)) {
		$assign(i, $cast($Integer, $nc(($cast($JComponent, c)))->getClientProperty(JLayeredPane::LAYER_PROPERTY)));
	} else {
		$assign(i, $cast($Integer, $nc($(getComponentToLayer()))->get(c)));
	}
	if (i == nullptr) {
		return $nc(JLayeredPane::DEFAULT_LAYER)->intValue();
	}
	return $nc(i)->intValue();
}

int32_t JLayeredPane::getIndexOf($Component* c) {
	int32_t i = 0;
	int32_t count = 0;
	count = getComponentCount();
	for (i = 0; i < count; ++i) {
		if (c == getComponent(i)) {
			return i;
		}
	}
	return -1;
}

void JLayeredPane::moveToFront($Component* c) {
	setPosition(c, 0);
}

void JLayeredPane::moveToBack($Component* c) {
	setPosition(c, -1);
}

void JLayeredPane::setPosition($Component* c, int32_t position) {
	setLayer(c, getLayer(c), position);
}

int32_t JLayeredPane::getPosition($Component* c) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t startLayer = 0;
	int32_t curLayer = 0;
	int32_t startLocation = 0;
	int32_t pos = 0;
	getComponentCount();
	startLocation = getIndexOf(c);
	if (startLocation == -1) {
		return -1;
	}
	startLayer = getLayer(c);
	for (i = startLocation - 1; i >= 0; --i) {
		curLayer = getLayer($(getComponent(i)));
		if (curLayer == startLayer) {
			++pos;
		} else {
			return pos;
		}
	}
	return pos;
}

int32_t JLayeredPane::highestLayer() {
	if (getComponentCount() > 0) {
		return getLayer($(getComponent(0)));
	}
	return 0;
}

int32_t JLayeredPane::lowestLayer() {
	int32_t count = getComponentCount();
	if (count > 0) {
		return getLayer($(getComponent(count - 1)));
	}
	return 0;
}

int32_t JLayeredPane::getComponentCountInLayer(int32_t layer) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t count = 0;
	int32_t curLayer = 0;
	int32_t layerCount = 0;
	count = getComponentCount();
	for (i = 0; i < count; ++i) {
		curLayer = getLayer($(getComponent(i)));
		if (curLayer == layer) {
			++layerCount;
		} else if (layerCount > 0 || curLayer < layer) {
			break;
		}
	}
	return layerCount;
}

$ComponentArray* JLayeredPane::getComponentsInLayer(int32_t layer) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t count = 0;
	int32_t curLayer = 0;
	int32_t layerCount = 0;
	$var($ComponentArray, results, nullptr);
	$assign(results, $new($ComponentArray, getComponentCountInLayer(layer)));
	count = getComponentCount();
	for (i = 0; i < count; ++i) {
		curLayer = getLayer($(getComponent(i)));
		if (curLayer == layer) {
			results->set(layerCount++, $(getComponent(i)));
		} else if (layerCount > 0 || curLayer < layer) {
			break;
		}
	}
	return results;
}

void JLayeredPane::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (isOpaque()) {
		$var($Rectangle, r, $nc(g)->getClipBounds());
		$var($Color, c, getBackground());
		if (c == nullptr) {
			$init($Color);
			$assign(c, $Color::lightGray);
		}
		g->setColor(c);
		if (r != nullptr) {
			g->fillRect(r->x, r->y, r->width, r->height);
		} else {
			int32_t var$0 = getWidth();
			g->fillRect(0, 0, var$0, getHeight());
		}
	}
	$JComponent::paint(g);
}

$Hashtable* JLayeredPane::getComponentToLayer() {
	if (this->componentToLayer == nullptr) {
		$set(this, componentToLayer, $new($Hashtable, 4));
	}
	return this->componentToLayer;
}

$Integer* JLayeredPane::getObjectForLayer(int32_t layer) {
	switch (layer) {
	case 0:
		{
			return JLayeredPane::DEFAULT_LAYER;
		}
	case 100:
		{
			return JLayeredPane::PALETTE_LAYER;
		}
	case 200:
		{
			return JLayeredPane::MODAL_LAYER;
		}
	case 300:
		{
			return JLayeredPane::POPUP_LAYER;
		}
	case 400:
		{
			return JLayeredPane::DRAG_LAYER;
		}
	default:
		{
			return $Integer::valueOf(layer);
		}
	}
}

int32_t JLayeredPane::insertIndexForLayer(int32_t layer, int32_t position) {
	return insertIndexForLayer(nullptr, layer, position);
}

int32_t JLayeredPane::insertIndexForLayer($Component* comp, int32_t layer, int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t count = 0;
	int32_t curLayer = 0;
	int32_t layerStart = -1;
	int32_t layerEnd = -1;
	int32_t componentCount = getComponentCount();
	$var($ArrayList, compList, $new($ArrayList, componentCount));
	for (int32_t index = 0; index < componentCount; ++index) {
		if (getComponent(index) != comp) {
			compList->add($(getComponent(index)));
		}
	}
	count = compList->size();
	for (i = 0; i < count; ++i) {
		curLayer = getLayer($cast($Component, $(compList->get(i))));
		if (layerStart == -1 && curLayer == layer) {
			layerStart = i;
		}
		if (curLayer < layer) {
			if (i == 0) {
				layerStart = 0;
				layerEnd = 0;
			} else {
				layerEnd = i;
			}
			break;
		}
	}
	if (layerStart == -1 && layerEnd == -1) {
		return count;
	}
	if (layerStart != -1 && layerEnd == -1) {
		layerEnd = count;
	}
	if (layerEnd != -1 && layerStart == -1) {
		layerStart = layerEnd;
	}
	if (position == -1) {
		return layerEnd;
	}
	if (position > -1 && layerStart + position <= layerEnd) {
		return layerStart + position;
	}
	return layerEnd;
}

$String* JLayeredPane::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, optimizedDrawingPossibleString, this->optimizedDrawingPossible ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",optimizedDrawingPossible="_s, optimizedDrawingPossibleString});
}

$AccessibleContext* JLayeredPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JLayeredPane$AccessibleJLayeredPane, this));
	}
	return this->accessibleContext;
}

void clinit$JLayeredPane($Class* class$) {
	$assignStatic(JLayeredPane::LAYER_PROPERTY, "layeredContainerLayer"_s);
	$assignStatic(JLayeredPane::DEFAULT_LAYER, $Integer::valueOf(0));
	$assignStatic(JLayeredPane::PALETTE_LAYER, $Integer::valueOf(100));
	$assignStatic(JLayeredPane::MODAL_LAYER, $Integer::valueOf(200));
	$assignStatic(JLayeredPane::POPUP_LAYER, $Integer::valueOf(300));
	$assignStatic(JLayeredPane::DRAG_LAYER, $Integer::valueOf(400));
	$assignStatic(JLayeredPane::FRAME_CONTENT_LAYER, $Integer::valueOf(-30000));
}

JLayeredPane::JLayeredPane() {
}

$Class* JLayeredPane::load$($String* name, bool initialize) {
	$loadClass(JLayeredPane, name, initialize, &_JLayeredPane_ClassInfo_, clinit$JLayeredPane, allocate$JLayeredPane);
	return class$;
}

$Class* JLayeredPane::class$ = nullptr;

	} // swing
} // javax