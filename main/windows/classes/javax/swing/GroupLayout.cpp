#include <javax/swing/GroupLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout$AutoPreferredGapSpring.h>
#include <javax/swing/GroupLayout$BaselineGroup.h>
#include <javax/swing/GroupLayout$ComponentInfo.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout$ContainerAutoPreferredGapSpring.h>
#include <javax/swing/GroupLayout$Group.h>
#include <javax/swing/GroupLayout$LinkInfo.h>
#include <javax/swing/GroupLayout$ParallelGroup.h>
#include <javax/swing/GroupLayout$SequentialGroup.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef BASELINE
#undef DEFAULT_SIZE
#undef HORIZONTAL
#undef INFINITE
#undef LEADING
#undef MAX_SIZE
#undef MIN_SIZE
#undef PREFERRED_SIZE
#undef PREF_SIZE
#undef SPECIFIC_SIZE
#undef UNSET
#undef VERTICAL

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;
using $GroupLayout$AutoPreferredGapSpring = ::javax::swing::GroupLayout$AutoPreferredGapSpring;
using $GroupLayout$BaselineGroup = ::javax::swing::GroupLayout$BaselineGroup;
using $GroupLayout$ComponentInfo = ::javax::swing::GroupLayout$ComponentInfo;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;
using $GroupLayout$ContainerAutoPreferredGapSpring = ::javax::swing::GroupLayout$ContainerAutoPreferredGapSpring;
using $GroupLayout$Group = ::javax::swing::GroupLayout$Group;
using $GroupLayout$LinkInfo = ::javax::swing::GroupLayout$LinkInfo;
using $GroupLayout$ParallelGroup = ::javax::swing::GroupLayout$ParallelGroup;
using $GroupLayout$SequentialGroup = ::javax::swing::GroupLayout$SequentialGroup;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $SwingConstants = ::javax::swing::SwingConstants;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout_FieldInfo_[] = {
	{"MIN_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GroupLayout, MIN_SIZE)},
	{"PREF_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GroupLayout, PREF_SIZE)},
	{"MAX_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GroupLayout, MAX_SIZE)},
	{"SPECIFIC_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GroupLayout, SPECIFIC_SIZE)},
	{"UNSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GroupLayout, UNSET)},
	{"INFINITE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GroupLayout, INFINITE)},
	{"DEFAULT_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GroupLayout, DEFAULT_SIZE)},
	{"PREFERRED_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GroupLayout, PREFERRED_SIZE)},
	{"autocreatePadding", "Z", nullptr, $PRIVATE, $field(GroupLayout, autocreatePadding)},
	{"autocreateContainerPadding", "Z", nullptr, $PRIVATE, $field(GroupLayout, autocreateContainerPadding)},
	{"horizontalGroup", "Ljavax/swing/GroupLayout$Group;", nullptr, $PRIVATE, $field(GroupLayout, horizontalGroup)},
	{"verticalGroup", "Ljavax/swing/GroupLayout$Group;", nullptr, $PRIVATE, $field(GroupLayout, verticalGroup)},
	{"componentInfos", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Component;Ljavax/swing/GroupLayout$ComponentInfo;>;", $PRIVATE, $field(GroupLayout, componentInfos)},
	{"host", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(GroupLayout, host)},
	{"tmpParallelSet", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/GroupLayout$Spring;>;", $PRIVATE, $field(GroupLayout, tmpParallelSet)},
	{"springsChanged", "Z", nullptr, $PRIVATE, $field(GroupLayout, springsChanged)},
	{"isValid", "Z", nullptr, $PRIVATE, $field(GroupLayout, isValid)},
	{"hasPreferredPaddingSprings", "Z", nullptr, $PRIVATE, $field(GroupLayout, hasPreferredPaddingSprings)},
	{"layoutStyle", "Ljavax/swing/LayoutStyle;", nullptr, $PRIVATE, $field(GroupLayout, layoutStyle)},
	{"honorsVisibility", "Z", nullptr, $PRIVATE, $field(GroupLayout, honorsVisibility)},
	{}
};

$MethodInfo _GroupLayout_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $method(static_cast<void(GroupLayout::*)($Container*)>(&GroupLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"adjustSize", "(II)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(GroupLayout::*)(int32_t,int32_t)>(&GroupLayout::adjustSize))},
	{"areParallelSiblings", "(Ljava/awt/Component;Ljava/awt/Component;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(GroupLayout::*)($Component*,$Component*,int32_t)>(&GroupLayout::areParallelSiblings))},
	{"calculateAutopadding", "(Ljavax/swing/GroupLayout$Group;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout::*)($GroupLayout$Group*,int32_t,int32_t,int32_t,int32_t)>(&GroupLayout::calculateAutopadding))},
	{"checkComponents", "()V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout::*)()>(&GroupLayout::checkComponents))},
	{"checkLessThan", "(II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&GroupLayout::checkLessThan))},
	{"checkParent", "(Ljava/awt/Container;)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout::*)($Container*)>(&GroupLayout::checkParent))},
	{"checkResizeType", "(IZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,bool)>(&GroupLayout::checkResizeType))},
	{"checkSize", "(IIIZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t,bool)>(&GroupLayout::checkSize))},
	{"createBaselineGroup", "(ZZ)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"createParallelGroup", "()Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"createParallelGroup", "(Ljavax/swing/GroupLayout$Alignment;)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"createParallelGroup", "(Ljavax/swing/GroupLayout$Alignment;Z)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"createSequentialGroup", "()Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"createSpringDescription", "(Ljava/lang/StringBuilder;Ljavax/swing/GroupLayout$Spring;Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout::*)($StringBuilder*,$GroupLayout$Spring*,$String*,int32_t)>(&GroupLayout::createSpringDescription))},
	{"createTopLevelGroup", "(Ljavax/swing/GroupLayout$Group;)Ljavax/swing/GroupLayout$Group;", nullptr, $PRIVATE, $method(static_cast<$GroupLayout$Group*(GroupLayout::*)($GroupLayout$Group*)>(&GroupLayout::createTopLevelGroup))},
	{"getAutoCreateContainerGaps", "()Z", nullptr, $PUBLIC},
	{"getAutoCreateGaps", "()Z", nullptr, $PUBLIC},
	{"getComponentInfo", "(Ljava/awt/Component;)Ljavax/swing/GroupLayout$ComponentInfo;", nullptr, $PRIVATE, $method(static_cast<$GroupLayout$ComponentInfo*(GroupLayout::*)($Component*)>(&GroupLayout::getComponentInfo))},
	{"getHonorsVisibility", "()Z", nullptr, $PUBLIC},
	{"getHorizontalGroup", "()Ljavax/swing/GroupLayout$Group;", nullptr, $PRIVATE, $method(static_cast<$GroupLayout$Group*(GroupLayout::*)()>(&GroupLayout::getHorizontalGroup))},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutStyle", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC},
	{"getLayoutStyle0", "()Ljavax/swing/LayoutStyle;", nullptr, $PRIVATE, $method(static_cast<$LayoutStyle*(GroupLayout::*)()>(&GroupLayout::getLayoutStyle0))},
	{"getVerticalGroup", "()Ljavax/swing/GroupLayout$Group;", nullptr, $PRIVATE, $method(static_cast<$GroupLayout$Group*(GroupLayout::*)()>(&GroupLayout::getVerticalGroup))},
	{"insertAutopadding", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout::*)(bool)>(&GroupLayout::insertAutopadding))},
	{"invalidateHost", "()V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout::*)()>(&GroupLayout::invalidateHost))},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"isLeftToRight", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(GroupLayout::*)()>(&GroupLayout::isLeftToRight))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"linkSize", "([Ljava/awt/Component;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"linkSize", "(I[Ljava/awt/Component;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"prepare", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout::*)(int32_t)>(&GroupLayout::prepare))},
	{"registerComponents", "(Ljavax/swing/GroupLayout$Group;I)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout::*)($GroupLayout$Group*,int32_t)>(&GroupLayout::registerComponents))},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"replace", "(Ljava/awt/Component;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setAutoCreateContainerGaps", "(Z)V", nullptr, $PUBLIC},
	{"setAutoCreateGaps", "(Z)V", nullptr, $PUBLIC},
	{"setHonorsVisibility", "(Z)V", nullptr, $PUBLIC},
	{"setHonorsVisibility", "(Ljava/awt/Component;Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"setHorizontalGroup", "(Ljavax/swing/GroupLayout$Group;)V", nullptr, $PUBLIC},
	{"setLayoutStyle", "(Ljavax/swing/LayoutStyle;)V", nullptr, $PUBLIC},
	{"setVerticalGroup", "(Ljavax/swing/GroupLayout$Group;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GroupLayout_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.GroupLayout$ComponentInfo", "javax.swing.GroupLayout", "ComponentInfo", $PRIVATE},
	{"javax.swing.GroupLayout$LinkInfo", "javax.swing.GroupLayout", "LinkInfo", $PRIVATE | $STATIC},
	{"javax.swing.GroupLayout$ContainerAutoPreferredGapSpring", "javax.swing.GroupLayout", "ContainerAutoPreferredGapSpring", $PRIVATE},
	{"javax.swing.GroupLayout$AutoPreferredGapMatch", "javax.swing.GroupLayout", "AutoPreferredGapMatch", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.GroupLayout$AutoPreferredGapSpring", "javax.swing.GroupLayout", "AutoPreferredGapSpring", $PRIVATE},
	{"javax.swing.GroupLayout$GapSpring", "javax.swing.GroupLayout", "GapSpring", $PRIVATE},
	{"javax.swing.GroupLayout$PreferredGapSpring", "javax.swing.GroupLayout", "PreferredGapSpring", $PRIVATE},
	{"javax.swing.GroupLayout$ComponentSpring", "javax.swing.GroupLayout", "ComponentSpring", $PRIVATE | $FINAL},
	{"javax.swing.GroupLayout$BaselineGroup", "javax.swing.GroupLayout", "BaselineGroup", $PRIVATE},
	{"javax.swing.GroupLayout$ParallelGroup", "javax.swing.GroupLayout", "ParallelGroup", $PUBLIC},
	{"javax.swing.GroupLayout$SpringDelta", "javax.swing.GroupLayout", "SpringDelta", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.GroupLayout$SequentialGroup", "javax.swing.GroupLayout", "SequentialGroup", $PUBLIC},
	{"javax.swing.GroupLayout$Group", "javax.swing.GroupLayout", "Group", $PUBLIC | $ABSTRACT},
	{"javax.swing.GroupLayout$Spring", "javax.swing.GroupLayout", "Spring", $PRIVATE | $ABSTRACT},
	{"javax.swing.GroupLayout$Alignment", "javax.swing.GroupLayout", "Alignment", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GroupLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.GroupLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2",
	_GroupLayout_FieldInfo_,
	_GroupLayout_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout$1,javax.swing.GroupLayout$ComponentInfo,javax.swing.GroupLayout$LinkInfo,javax.swing.GroupLayout$ContainerAutoPreferredGapSpring,javax.swing.GroupLayout$AutoPreferredGapMatch,javax.swing.GroupLayout$AutoPreferredGapSpring,javax.swing.GroupLayout$GapSpring,javax.swing.GroupLayout$PreferredGapSpring,javax.swing.GroupLayout$ComponentSpring,javax.swing.GroupLayout$BaselineGroup,javax.swing.GroupLayout$ParallelGroup,javax.swing.GroupLayout$SpringDelta,javax.swing.GroupLayout$SequentialGroup,javax.swing.GroupLayout$Group,javax.swing.GroupLayout$Spring,javax.swing.GroupLayout$Alignment"
};

$Object* allocate$GroupLayout($Class* clazz) {
	return $of($alloc(GroupLayout));
}

void GroupLayout::checkSize(int32_t min, int32_t pref, int32_t max, bool isComponentSpring) {
	$init(GroupLayout);
	checkResizeType(min, isComponentSpring);
	if (!isComponentSpring && pref < 0) {
		$throwNew($IllegalArgumentException, "Pref must be >= 0"_s);
	} else if (isComponentSpring) {
		checkResizeType(pref, true);
	}
	checkResizeType(max, isComponentSpring);
	checkLessThan(min, pref);
	checkLessThan(pref, max);
}

void GroupLayout::checkResizeType(int32_t type, bool isComponentSpring) {
	$init(GroupLayout);
	if (type < 0 && ((isComponentSpring && type != GroupLayout::DEFAULT_SIZE && type != GroupLayout::PREFERRED_SIZE) || (!isComponentSpring && type != GroupLayout::PREFERRED_SIZE))) {
		$throwNew($IllegalArgumentException, "Invalid size"_s);
	}
}

void GroupLayout::checkLessThan(int32_t min, int32_t max) {
	$init(GroupLayout);
	if (min >= 0 && max >= 0 && min > max) {
		$throwNew($IllegalArgumentException, "Following is not met: min<=pref<=max"_s);
	}
}

void GroupLayout::init$($Container* host) {
	if (host == nullptr) {
		$throwNew($IllegalArgumentException, "Container must be non-null"_s);
	}
	this->honorsVisibility = true;
	$set(this, host, host);
	$init($GroupLayout$Alignment);
	setHorizontalGroup($(createParallelGroup($GroupLayout$Alignment::LEADING, true)));
	setVerticalGroup($(createParallelGroup($GroupLayout$Alignment::LEADING, true)));
	$set(this, componentInfos, $new($HashMap));
	$set(this, tmpParallelSet, $new($HashSet));
}

void GroupLayout::setHonorsVisibility(bool honorsVisibility) {
	if (this->honorsVisibility != honorsVisibility) {
		this->honorsVisibility = honorsVisibility;
		this->springsChanged = true;
		this->isValid = false;
		invalidateHost();
	}
}

bool GroupLayout::getHonorsVisibility() {
	return this->honorsVisibility;
}

void GroupLayout::setHonorsVisibility($Component* component, $Boolean* honorsVisibility) {
	if (component == nullptr) {
		$throwNew($IllegalArgumentException, "Component must be non-null"_s);
	}
	$nc($(getComponentInfo(component)))->setHonorsVisibility(honorsVisibility);
	this->springsChanged = true;
	this->isValid = false;
	invalidateHost();
}

void GroupLayout::setAutoCreateGaps(bool autoCreatePadding) {
	if (this->autocreatePadding != autoCreatePadding) {
		this->autocreatePadding = autoCreatePadding;
		invalidateHost();
	}
}

bool GroupLayout::getAutoCreateGaps() {
	return this->autocreatePadding;
}

void GroupLayout::setAutoCreateContainerGaps(bool autoCreateContainerPadding) {
	if (this->autocreateContainerPadding != autoCreateContainerPadding) {
		this->autocreateContainerPadding = autoCreateContainerPadding;
		$set(this, horizontalGroup, createTopLevelGroup($(getHorizontalGroup())));
		$set(this, verticalGroup, createTopLevelGroup($(getVerticalGroup())));
		invalidateHost();
	}
}

bool GroupLayout::getAutoCreateContainerGaps() {
	return this->autocreateContainerPadding;
}

void GroupLayout::setHorizontalGroup($GroupLayout$Group* group) {
	if (group == nullptr) {
		$throwNew($IllegalArgumentException, "Group must be non-null"_s);
	}
	$set(this, horizontalGroup, createTopLevelGroup(group));
	invalidateHost();
}

$GroupLayout$Group* GroupLayout::getHorizontalGroup() {
	int32_t index = 0;
	if ($nc($nc(this->horizontalGroup)->springs)->size() > 1) {
		index = 1;
	}
	return $cast($GroupLayout$Group, $nc($nc(this->horizontalGroup)->springs)->get(index));
}

void GroupLayout::setVerticalGroup($GroupLayout$Group* group) {
	if (group == nullptr) {
		$throwNew($IllegalArgumentException, "Group must be non-null"_s);
	}
	$set(this, verticalGroup, createTopLevelGroup(group));
	invalidateHost();
}

$GroupLayout$Group* GroupLayout::getVerticalGroup() {
	int32_t index = 0;
	if ($nc($nc(this->verticalGroup)->springs)->size() > 1) {
		index = 1;
	}
	return $cast($GroupLayout$Group, $nc($nc(this->verticalGroup)->springs)->get(index));
}

$GroupLayout$Group* GroupLayout::createTopLevelGroup($GroupLayout$Group* specifiedGroup) {
	$var($GroupLayout$SequentialGroup, group, createSequentialGroup());
	if (getAutoCreateContainerGaps()) {
		$nc(group)->addSpring($$new($GroupLayout$ContainerAutoPreferredGapSpring, this));
		group->addGroup(specifiedGroup);
		group->addSpring($$new($GroupLayout$ContainerAutoPreferredGapSpring, this));
	} else {
		$nc(group)->addGroup(specifiedGroup);
	}
	return group;
}

$GroupLayout$SequentialGroup* GroupLayout::createSequentialGroup() {
	return $new($GroupLayout$SequentialGroup, this);
}

$GroupLayout$ParallelGroup* GroupLayout::createParallelGroup() {
	$init($GroupLayout$Alignment);
	return createParallelGroup($GroupLayout$Alignment::LEADING);
}

$GroupLayout$ParallelGroup* GroupLayout::createParallelGroup($GroupLayout$Alignment* alignment) {
	return createParallelGroup(alignment, true);
}

$GroupLayout$ParallelGroup* GroupLayout::createParallelGroup($GroupLayout$Alignment* alignment, bool resizable) {
	if (alignment == nullptr) {
		$throwNew($IllegalArgumentException, "alignment must be non null"_s);
	}
	$init($GroupLayout$Alignment);
	if (alignment == $GroupLayout$Alignment::BASELINE) {
		return $new($GroupLayout$BaselineGroup, this, resizable);
	}
	return $new($GroupLayout$ParallelGroup, this, alignment, resizable);
}

$GroupLayout$ParallelGroup* GroupLayout::createBaselineGroup(bool resizable, bool anchorBaselineToTop) {
	return $new($GroupLayout$BaselineGroup, this, resizable, anchorBaselineToTop);
}

void GroupLayout::linkSize($ComponentArray* components) {
	linkSize($SwingConstants::HORIZONTAL, components);
	linkSize($SwingConstants::VERTICAL, components);
}

void GroupLayout::linkSize(int32_t axis, $ComponentArray* components) {
	if (components == nullptr) {
		$throwNew($IllegalArgumentException, "Components must be non-null"_s);
	}
	for (int32_t counter = $nc(components)->length - 1; counter >= 0; --counter) {
		$var($Component, c, components->get(counter));
		if (components->get(counter) == nullptr) {
			$throwNew($IllegalArgumentException, "Components must be non-null"_s);
		}
		getComponentInfo(c);
	}
	int32_t glAxis = 0;
	if (axis == $SwingConstants::HORIZONTAL) {
		glAxis = 0;
	} else if (axis == $SwingConstants::VERTICAL) {
		glAxis = 1;
	} else {
		$throwNew($IllegalArgumentException, "Axis must be one of SwingConstants.HORIZONTAL or SwingConstants.VERTICAL"_s);
	}
	$var($GroupLayout$LinkInfo, master, $nc($(getComponentInfo(components->get(components->length - 1))))->getLinkInfo(glAxis));
	for (int32_t counter = components->length - 2; counter >= 0; --counter) {
		$nc(master)->add($(getComponentInfo(components->get(counter))));
	}
	invalidateHost();
}

void GroupLayout::replace($Component* existingComponent, $Component* newComponent) {
	if (existingComponent == nullptr || newComponent == nullptr) {
		$throwNew($IllegalArgumentException, "Components must be non-null"_s);
	}
	if (this->springsChanged) {
		registerComponents(this->horizontalGroup, 0);
		registerComponents(this->verticalGroup, 1);
	}
	$var($GroupLayout$ComponentInfo, info, $cast($GroupLayout$ComponentInfo, $nc(this->componentInfos)->remove(existingComponent)));
	if (info == nullptr) {
		$throwNew($IllegalArgumentException, "Component must already exist"_s);
	}
	$nc(this->host)->remove(existingComponent);
	if ($nc(newComponent)->getParent() != this->host) {
		$nc(this->host)->add(newComponent);
	}
	$nc(info)->setComponent(newComponent);
	$nc(this->componentInfos)->put(newComponent, info);
	invalidateHost();
}

void GroupLayout::setLayoutStyle($LayoutStyle* layoutStyle) {
	$set(this, layoutStyle, layoutStyle);
	invalidateHost();
}

$LayoutStyle* GroupLayout::getLayoutStyle() {
	return this->layoutStyle;
}

$LayoutStyle* GroupLayout::getLayoutStyle0() {
	$var($LayoutStyle, layoutStyle, getLayoutStyle());
	if (layoutStyle == nullptr) {
		$assign(layoutStyle, $LayoutStyle::getInstance());
	}
	return layoutStyle;
}

void GroupLayout::invalidateHost() {
	if ($instanceOf($JComponent, this->host)) {
		$nc(($cast($JComponent, this->host)))->revalidate();
	} else {
		$nc(this->host)->invalidate();
	}
	$nc(this->host)->repaint();
}

void GroupLayout::addLayoutComponent($String* name, $Component* component) {
}

void GroupLayout::removeLayoutComponent($Component* component) {
	$var($GroupLayout$ComponentInfo, info, $cast($GroupLayout$ComponentInfo, $nc(this->componentInfos)->remove(component)));
	if (info != nullptr) {
		info->dispose();
		this->springsChanged = true;
		this->isValid = false;
	}
}

$Dimension* GroupLayout::preferredLayoutSize($Container* parent) {
	checkParent(parent);
	prepare(GroupLayout::PREF_SIZE);
	int32_t var$0 = $nc(this->horizontalGroup)->getPreferredSize(0);
	return adjustSize(var$0, $nc(this->verticalGroup)->getPreferredSize(1));
}

$Dimension* GroupLayout::minimumLayoutSize($Container* parent) {
	checkParent(parent);
	prepare(GroupLayout::MIN_SIZE);
	int32_t var$0 = $nc(this->horizontalGroup)->getMinimumSize(0);
	return adjustSize(var$0, $nc(this->verticalGroup)->getMinimumSize(1));
}

void GroupLayout::layoutContainer($Container* parent) {
	prepare(GroupLayout::SPECIFIC_SIZE);
	$var($Insets, insets, $nc(parent)->getInsets());
	int32_t width = parent->getWidth() - $nc(insets)->left - insets->right;
	int32_t height = parent->getHeight() - insets->top - insets->bottom;
	bool ltr = isLeftToRight();
	bool var$0 = getAutoCreateGaps();
	if (var$0 || getAutoCreateContainerGaps() || this->hasPreferredPaddingSprings) {
		calculateAutopadding(this->horizontalGroup, 0, GroupLayout::SPECIFIC_SIZE, 0, width);
		calculateAutopadding(this->verticalGroup, 1, GroupLayout::SPECIFIC_SIZE, 0, height);
	}
	$nc(this->horizontalGroup)->setSize(0, 0, width);
	$nc(this->verticalGroup)->setSize(1, 0, height);
	{
		$var($Iterator, i$, $nc($($nc(this->componentInfos)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$ComponentInfo, info, $cast($GroupLayout$ComponentInfo, i$->next()));
			{
				$nc(info)->setBounds(insets, width, ltr);
			}
		}
	}
}

void GroupLayout::addLayoutComponent($Component* component, Object$* constraints) {
}

$Dimension* GroupLayout::maximumLayoutSize($Container* parent) {
	checkParent(parent);
	prepare(GroupLayout::MAX_SIZE);
	int32_t var$0 = $nc(this->horizontalGroup)->getMaximumSize(0);
	return adjustSize(var$0, $nc(this->verticalGroup)->getMaximumSize(1));
}

float GroupLayout::getLayoutAlignmentX($Container* parent) {
	checkParent(parent);
	return 0.5f;
}

float GroupLayout::getLayoutAlignmentY($Container* parent) {
	checkParent(parent);
	return 0.5f;
}

void GroupLayout::invalidateLayout($Container* parent) {
	checkParent(parent);
	$synchronized($nc(parent)->getTreeLock()) {
		this->isValid = false;
	}
}

void GroupLayout::prepare(int32_t sizeType) {
	bool visChanged = false;
	if (!this->isValid) {
		this->isValid = true;
		$nc(this->horizontalGroup)->setSize(0, GroupLayout::UNSET, GroupLayout::UNSET);
		$nc(this->verticalGroup)->setSize(1, GroupLayout::UNSET, GroupLayout::UNSET);
		{
			$var($Iterator, i$, $nc($($nc(this->componentInfos)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($GroupLayout$ComponentInfo, ci, $cast($GroupLayout$ComponentInfo, i$->next()));
				{
					if ($nc(ci)->updateVisibility()) {
						visChanged = true;
					}
					$nc(ci)->clearCachedSize();
				}
			}
		}
	}
	if (this->springsChanged) {
		registerComponents(this->horizontalGroup, 0);
		registerComponents(this->verticalGroup, 1);
	}
	if (this->springsChanged || visChanged) {
		checkComponents();
		$nc(this->horizontalGroup)->removeAutopadding();
		$nc(this->verticalGroup)->removeAutopadding();
		if (getAutoCreateGaps()) {
			insertAutopadding(true);
		} else if (this->hasPreferredPaddingSprings || getAutoCreateContainerGaps()) {
			insertAutopadding(false);
		}
		this->springsChanged = false;
	}
	bool var$0 = sizeType != GroupLayout::SPECIFIC_SIZE;
	if (var$0) {
		bool var$1 = getAutoCreateGaps();
		var$0 = (var$1 || getAutoCreateContainerGaps() || this->hasPreferredPaddingSprings);
	}
	if (var$0) {
		calculateAutopadding(this->horizontalGroup, 0, sizeType, 0, 0);
		calculateAutopadding(this->verticalGroup, 1, sizeType, 0, 0);
	}
}

void GroupLayout::calculateAutopadding($GroupLayout$Group* group, int32_t axis, int32_t sizeType, int32_t origin, int32_t size) {
	$nc(group)->unsetAutopadding();
	switch (sizeType) {
	case GroupLayout::MIN_SIZE:
		{
			size = group->getMinimumSize(axis);
			break;
		}
	case GroupLayout::PREF_SIZE:
		{
			size = group->getPreferredSize(axis);
			break;
		}
	case GroupLayout::MAX_SIZE:
		{
			size = group->getMaximumSize(axis);
			break;
		}
	default:
		{
			break;
		}
	}
	group->setSize(axis, origin, size);
	group->calculateAutopadding(axis);
}

void GroupLayout::checkComponents() {
	{
		$var($Iterator, i$, $nc($($nc(this->componentInfos)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$ComponentInfo, info, $cast($GroupLayout$ComponentInfo, i$->next()));
			{
				if ($nc(info)->horizontalSpring == nullptr) {
					$throwNew($IllegalStateException, $$str({info->component, " is not attached to a horizontal group"_s}));
				}
				if ($nc(info)->verticalSpring == nullptr) {
					$throwNew($IllegalStateException, $$str({info->component, " is not attached to a vertical group"_s}));
				}
			}
		}
	}
}

void GroupLayout::registerComponents($GroupLayout$Group* group, int32_t axis) {
	$var($List, springs, $nc(group)->springs);
	for (int32_t counter = $nc(springs)->size() - 1; counter >= 0; --counter) {
		$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, springs->get(counter)));
		if ($instanceOf($GroupLayout$ComponentSpring, spring)) {
			$nc(($cast($GroupLayout$ComponentSpring, spring)))->installIfNecessary(axis);
		} else if ($instanceOf($GroupLayout$Group, spring)) {
			registerComponents($cast($GroupLayout$Group, spring), axis);
		}
	}
}

$Dimension* GroupLayout::adjustSize(int32_t width, int32_t height) {
	$var($Insets, insets, $nc(this->host)->getInsets());
	return $new($Dimension, width + $nc(insets)->left + insets->right, height + insets->top + insets->bottom);
}

void GroupLayout::checkParent($Container* parent) {
	if (parent != this->host) {
		$throwNew($IllegalArgumentException, "GroupLayout can only be used with one Container at a time"_s);
	}
}

$GroupLayout$ComponentInfo* GroupLayout::getComponentInfo($Component* component) {
	$var($GroupLayout$ComponentInfo, info, $cast($GroupLayout$ComponentInfo, $nc(this->componentInfos)->get(component)));
	if (info == nullptr) {
		$assign(info, $new($GroupLayout$ComponentInfo, this, component));
		$nc(this->componentInfos)->put(component, info);
		if ($nc(component)->getParent() != this->host) {
			$nc(this->host)->add(component);
		}
	}
	return info;
}

void GroupLayout::insertAutopadding(bool insert) {
	$var($List, var$0, static_cast<$List*>($new($ArrayList, 1)));
	$var($List, var$1, static_cast<$List*>($new($ArrayList, 1)));
	$var($List, var$2, static_cast<$List*>($new($ArrayList, 1)));
	$nc(this->horizontalGroup)->insertAutopadding(0, var$0, var$1, var$2, $$new($ArrayList, 1), insert);
	$var($List, var$3, static_cast<$List*>($new($ArrayList, 1)));
	$var($List, var$4, static_cast<$List*>($new($ArrayList, 1)));
	$var($List, var$5, static_cast<$List*>($new($ArrayList, 1)));
	$nc(this->verticalGroup)->insertAutopadding(1, var$3, var$4, var$5, $$new($ArrayList, 1), insert);
}

bool GroupLayout::areParallelSiblings($Component* source, $Component* target, int32_t axis) {
	$var($GroupLayout$ComponentInfo, sourceInfo, getComponentInfo(source));
	$var($GroupLayout$ComponentInfo, targetInfo, getComponentInfo(target));
	$var($GroupLayout$Spring, sourceSpring, nullptr);
	$var($GroupLayout$Spring, targetSpring, nullptr);
	if (axis == 0) {
		$assign(sourceSpring, $nc(sourceInfo)->horizontalSpring);
		$assign(targetSpring, $nc(targetInfo)->horizontalSpring);
	} else {
		$assign(sourceSpring, $nc(sourceInfo)->verticalSpring);
		$assign(targetSpring, $nc(targetInfo)->verticalSpring);
	}
	$var($Set, sourcePath, this->tmpParallelSet);
	$nc(sourcePath)->clear();
	$var($GroupLayout$Spring, spring, $nc(sourceSpring)->getParent());
	while (spring != nullptr) {
		sourcePath->add(spring);
		$assign(spring, spring->getParent());
	}
	$assign(spring, $nc(targetSpring)->getParent());
	while (spring != nullptr) {
		if (sourcePath->contains(spring)) {
			sourcePath->clear();
			while (spring != nullptr) {
				if ($instanceOf($GroupLayout$ParallelGroup, spring)) {
					return true;
				}
				$assign(spring, spring->getParent());
			}
			return false;
		}
		$assign(spring, spring->getParent());
	}
	sourcePath->clear();
	return false;
}

bool GroupLayout::isLeftToRight() {
	return $nc($($nc(this->host)->getComponentOrientation()))->isLeftToRight();
}

$String* GroupLayout::toString() {
	if (this->springsChanged) {
		registerComponents(this->horizontalGroup, 0);
		registerComponents(this->verticalGroup, 1);
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("HORIZONTAL\n"_s);
	createSpringDescription(sb, this->horizontalGroup, "  "_s, 0);
	sb->append("\nVERTICAL\n"_s);
	createSpringDescription(sb, this->verticalGroup, "  "_s, 1);
	return sb->toString();
}

void GroupLayout::createSpringDescription($StringBuilder* sb, $GroupLayout$Spring* spring, $String* indent$renamed, int32_t axis) {
	$var($String, indent, indent$renamed);
	$var($String, origin, ""_s);
	$var($String, padding, ""_s);
	if ($instanceOf($GroupLayout$ComponentSpring, spring)) {
		$var($GroupLayout$ComponentSpring, cSpring, $cast($GroupLayout$ComponentSpring, spring));
		$assign(origin, $str({$($Integer::toString($nc(cSpring)->getOrigin())), " "_s}));
		$var($String, name, $nc($($nc(cSpring)->getComponent()))->getName());
		if (name != nullptr) {
			$assign(origin, $str({"name="_s, name, ", "_s}));
		}
	}
	if ($instanceOf($GroupLayout$AutoPreferredGapSpring, spring)) {
		$var($GroupLayout$AutoPreferredGapSpring, paddingSpring, $cast($GroupLayout$AutoPreferredGapSpring, spring));
		$var($String, var$0, $$str({", userCreated="_s, $$str($nc(paddingSpring)->getUserCreated()), ", matches="_s}));
		$assign(padding, $concat(var$0, $(paddingSpring->getMatchDescription())));
	}
	$nc(sb)->append(indent)->append($($nc($of(spring))->getClass()->getName()))->append(u' ')->append($($Integer::toHexString($nc($of(spring))->hashCode())))->append(u' ')->append(origin)->append(", size="_s)->append($nc(spring)->getSize())->append(", alignment="_s)->append($($of($nc(spring)->getAlignment())))->append(" prefs=["_s)->append($nc(spring)->getMinimumSize(axis))->append(u' ')->append($nc(spring)->getPreferredSize(axis))->append(u' ')->append($nc(spring)->getMaximumSize(axis))->append(padding)->append("]\n"_s);
	if ($instanceOf($GroupLayout$Group, spring)) {
		$var($List, springs, $nc(($cast($GroupLayout$Group, spring)))->springs);
		$plusAssign(indent, "  "_s);
		for (int32_t counter = 0; counter < $nc(springs)->size(); ++counter) {
			createSpringDescription(sb, $cast($GroupLayout$Spring, $(springs->get(counter))), indent, axis);
		}
	}
}

GroupLayout::GroupLayout() {
}

$Class* GroupLayout::load$($String* name, bool initialize) {
	$loadClass(GroupLayout, name, initialize, &_GroupLayout_ClassInfo_, allocate$GroupLayout);
	return class$;
}

$Class* GroupLayout::class$ = nullptr;

	} // swing
} // javax