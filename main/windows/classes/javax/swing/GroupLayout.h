#ifndef _javax_swing_GroupLayout_h_
#define _javax_swing_GroupLayout_h_
//$ class javax.swing.GroupLayout
//$ extends java.awt.LayoutManager2

#include <java/awt/LayoutManager2.h>
#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("DEFAULT_SIZE")
#undef DEFAULT_SIZE
#pragma push_macro("INFINITE")
#undef INFINITE
#pragma push_macro("MAX_SIZE")
#undef MAX_SIZE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_SIZE")
#undef MIN_SIZE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("PREFERRED_SIZE")
#undef PREFERRED_SIZE
#pragma push_macro("PREF_SIZE")
#undef PREF_SIZE
#pragma push_macro("SPECIFIC_SIZE")
#undef SPECIFIC_SIZE
#pragma push_macro("UNSET")
#undef UNSET

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace javax {
	namespace swing {
		class GroupLayout$Alignment;
		class GroupLayout$ComponentInfo;
		class GroupLayout$Group;
		class GroupLayout$ParallelGroup;
		class GroupLayout$SequentialGroup;
		class GroupLayout$Spring;
		class LayoutStyle;
	}
}

namespace javax {
	namespace swing {

class $export GroupLayout : public ::java::awt::LayoutManager2 {
	$class(GroupLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager2)
public:
	GroupLayout();
	void init$(::java::awt::Container* host);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* component) override;
	virtual void addLayoutComponent(::java::awt::Component* component, Object$* constraints) override;
	::java::awt::Dimension* adjustSize(int32_t width, int32_t height);
	bool areParallelSiblings(::java::awt::Component* source, ::java::awt::Component* target, int32_t axis);
	void calculateAutopadding(::javax::swing::GroupLayout$Group* group, int32_t axis, int32_t sizeType, int32_t origin, int32_t size);
	void checkComponents();
	static void checkLessThan(int32_t min, int32_t max);
	void checkParent(::java::awt::Container* parent);
	static void checkResizeType(int32_t type, bool isComponentSpring);
	static void checkSize(int32_t min, int32_t pref, int32_t max, bool isComponentSpring);
	virtual ::javax::swing::GroupLayout$ParallelGroup* createBaselineGroup(bool resizable, bool anchorBaselineToTop);
	virtual ::javax::swing::GroupLayout$ParallelGroup* createParallelGroup();
	virtual ::javax::swing::GroupLayout$ParallelGroup* createParallelGroup(::javax::swing::GroupLayout$Alignment* alignment);
	virtual ::javax::swing::GroupLayout$ParallelGroup* createParallelGroup(::javax::swing::GroupLayout$Alignment* alignment, bool resizable);
	virtual ::javax::swing::GroupLayout$SequentialGroup* createSequentialGroup();
	void createSpringDescription(::java::lang::StringBuilder* sb, ::javax::swing::GroupLayout$Spring* spring, $String* indent, int32_t axis);
	::javax::swing::GroupLayout$Group* createTopLevelGroup(::javax::swing::GroupLayout$Group* specifiedGroup);
	virtual bool getAutoCreateContainerGaps();
	virtual bool getAutoCreateGaps();
	::javax::swing::GroupLayout$ComponentInfo* getComponentInfo(::java::awt::Component* component);
	virtual bool getHonorsVisibility();
	::javax::swing::GroupLayout$Group* getHorizontalGroup();
	virtual float getLayoutAlignmentX(::java::awt::Container* parent) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* parent) override;
	virtual ::javax::swing::LayoutStyle* getLayoutStyle();
	::javax::swing::LayoutStyle* getLayoutStyle0();
	::javax::swing::GroupLayout$Group* getVerticalGroup();
	void insertAutopadding(bool insert);
	void invalidateHost();
	virtual void invalidateLayout(::java::awt::Container* parent) override;
	bool isLeftToRight();
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual void linkSize($Array<::java::awt::Component>* components);
	virtual void linkSize(int32_t axis, $Array<::java::awt::Component>* components);
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	void prepare(int32_t sizeType);
	void registerComponents(::javax::swing::GroupLayout$Group* group, int32_t axis);
	virtual void removeLayoutComponent(::java::awt::Component* component) override;
	virtual void replace(::java::awt::Component* existingComponent, ::java::awt::Component* newComponent);
	virtual void setAutoCreateContainerGaps(bool autoCreateContainerPadding);
	virtual void setAutoCreateGaps(bool autoCreatePadding);
	virtual void setHonorsVisibility(bool honorsVisibility);
	virtual void setHonorsVisibility(::java::awt::Component* component, ::java::lang::Boolean* honorsVisibility);
	virtual void setHorizontalGroup(::javax::swing::GroupLayout$Group* group);
	virtual void setLayoutStyle(::javax::swing::LayoutStyle* layoutStyle);
	virtual void setVerticalGroup(::javax::swing::GroupLayout$Group* group);
	virtual $String* toString() override;
	static const int32_t MIN_SIZE = 0;
	static const int32_t PREF_SIZE = 1;
	static const int32_t MAX_SIZE = 2;
	static const int32_t SPECIFIC_SIZE = 3;
	static const int32_t UNSET = ::java::lang::Integer::MIN_VALUE;
	static const int32_t INFINITE = 0x3FFFFFFF; // ::java::lang::Integer::MAX_VALUE >> 1
	static const int32_t DEFAULT_SIZE = (-1);
	static const int32_t PREFERRED_SIZE = (-2);
	bool autocreatePadding = false;
	bool autocreateContainerPadding = false;
	::javax::swing::GroupLayout$Group* horizontalGroup = nullptr;
	::javax::swing::GroupLayout$Group* verticalGroup = nullptr;
	::java::util::Map* componentInfos = nullptr;
	::java::awt::Container* host = nullptr;
	::java::util::Set* tmpParallelSet = nullptr;
	bool springsChanged = false;
	bool isValid = false;
	bool hasPreferredPaddingSprings = false;
	::javax::swing::LayoutStyle* layoutStyle = nullptr;
	bool honorsVisibility = false;
};

	} // swing
} // javax

#pragma pop_macro("DEFAULT_SIZE")
#pragma pop_macro("INFINITE")
#pragma pop_macro("MAX_SIZE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_SIZE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("PREFERRED_SIZE")
#pragma pop_macro("PREF_SIZE")
#pragma pop_macro("SPECIFIC_SIZE")
#pragma pop_macro("UNSET")

#endif // _javax_swing_GroupLayout_h_