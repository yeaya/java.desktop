#ifndef _java_awt_Container_h_
#define _java_awt_Container_h_
//$ class java.awt.Container
//$ extends java.awt.Component

#include <java/awt/Component.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY_ARRAY")
#undef EMPTY_ARRAY
#pragma push_macro("INCLUDE_SELF")
#undef INCLUDE_SELF
#pragma push_macro("SEARCH_HEAVYWEIGHTS")
#undef SEARCH_HEAVYWEIGHTS

namespace java {
	namespace awt {
		class AWTEvent;
		class Color;
		class ComponentOrientation;
		class Container$EventTargetFilter;
		class Dimension;
		class Event;
		class FocusTraversalPolicy;
		class Font;
		class Graphics;
		class GraphicsConfiguration;
		class Insets;
		class LayoutManager;
		class LightweightDispatcher;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
			class ContainerListener;
			class KeyEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ContainerPeer;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace util {
		class EventListener;
		class List;
		class Set;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class $export Container : public ::java::awt::Component {
	$class(Container, 0, ::java::awt::Component)
public:
	Container();
	using ::java::awt::Component::getMousePosition;
	using ::java::awt::Component::add;
	using ::java::awt::Component::list;
	void init$();
	virtual ::java::awt::Component* add(::java::awt::Component* comp);
	virtual ::java::awt::Component* add($String* name, ::java::awt::Component* comp);
	virtual ::java::awt::Component* add(::java::awt::Component* comp, int32_t index);
	virtual void add(::java::awt::Component* comp, Object$* constraints);
	virtual void add(::java::awt::Component* comp, Object$* constraints, int32_t index);
	virtual void addContainerListener(::java::awt::event::ContainerListener* l);
	void addDelicately(::java::awt::Component* comp, ::java::awt::Container* curParent, int32_t index);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index);
	virtual void addNotify() override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener) override;
	virtual void adjustDescendants(int32_t num);
	virtual void adjustDescendantsOnParent(int32_t num);
	virtual void adjustListeningChildren(int64_t mask, int32_t num);
	virtual void applyComponentOrientation(::java::awt::ComponentOrientation* o) override;
	virtual bool areFocusTraversalKeysSet(int32_t id) override;
	virtual bool canContainFocusOwner(::java::awt::Component* focusOwnerCandidate);
	void checkAddToSelf(::java::awt::Component* comp);
	void checkAdding(::java::awt::Component* comp, int32_t index);
	virtual void checkGD($String* stringID) override;
	void checkNotAWindow(::java::awt::Component* comp);
	virtual void clearCurrentFocusCycleRootOnHide() override;
	virtual void clearMostRecentFocusOwnerOnHide() override;
	virtual bool containsFocus() override;
	virtual int32_t countComponents();
	virtual int32_t countHierarchyMembers() override;
	void createChildHierarchyEvents(int32_t id, int64_t changeFlags, bool enabledOnToolkit);
	virtual int32_t createHierarchyEvents(int32_t id, ::java::awt::Component* changed, ::java::awt::Container* changedParent, int64_t changeFlags, bool enabledOnToolkit) override;
	void decreaseComponentCount(::java::awt::Component* c);
	virtual void deliverEvent(::java::awt::Event* e) override;
	virtual void dispatchEventImpl(::java::awt::AWTEvent* e) override;
	virtual void dispatchEventToSelf(::java::awt::AWTEvent* e);
	virtual void doLayout() override;
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::java::awt::Component* findComponentAt(int32_t x, int32_t y);
	::java::awt::Component* findComponentAt(int32_t x, int32_t y, bool ignoreEnabled);
	virtual ::java::awt::Component* findComponentAt(::java::awt::Point* p);
	::java::awt::Component* findComponentAtImpl(int32_t x, int32_t y, bool ignoreEnabled);
	::java::awt::Container* findTraversalRoot();
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i);
	virtual int32_t getAccessibleChildrenCount();
	virtual float getAlignmentX() override;
	virtual float getAlignmentY() override;
	int32_t getBottommostComponentIndex();
	static ::java::awt::Component* getChildAt(::java::awt::Component* comp, int32_t x, int32_t y, bool ignoreEnabled);
	virtual ::java::awt::Component* getComponent(int32_t n);
	virtual ::java::awt::Component* getComponentAt(int32_t x, int32_t y) override;
	virtual ::java::awt::Component* getComponentAt(::java::awt::Point* p) override;
	virtual int32_t getComponentCount();
	virtual int32_t getComponentZOrder(::java::awt::Component* comp);
	virtual $Array<::java::awt::Component>* getComponents();
	virtual $Array<::java::awt::Component>* getComponentsSync();
	$Array<::java::awt::Component>* getComponents_NoClientCode();
	virtual $Array<::java::awt::event::ContainerListener>* getContainerListeners();
	virtual ::java::awt::Component* getDropTargetEventTarget(int32_t x, int32_t y, bool includeSelf);
	virtual ::java::util::Set* getFocusTraversalKeys(int32_t id) override;
	virtual ::java::awt::FocusTraversalPolicy* getFocusTraversalPolicy();
	virtual ::java::awt::Container* getHeavyweightContainer();
	virtual ::java::awt::Insets* getInsets();
	virtual ::java::awt::LayoutManager* getLayout();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	int32_t getListenersCount(int32_t id, bool enabledOnToolkit);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Component* getMouseEventTarget(int32_t x, int32_t y, bool includeSelf);
	::java::awt::Component* getMouseEventTarget(int32_t x, int32_t y, bool includeSelf, ::java::awt::Container$EventTargetFilter* filter, bool searchHeavyweights);
	::java::awt::Component* getMouseEventTargetImpl(int32_t x, int32_t y, bool includeSelf, ::java::awt::Container$EventTargetFilter* filter, bool searchHeavyweightChildren, bool searchHeavyweightDescendants);
	virtual ::java::awt::Point* getMousePosition(bool allowChildren);
	virtual ::sun::java2d::pipe::Region* getOpaqueShape() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	int32_t getTopmostComponentIndex();
	virtual ::java::awt::Container* getTraversalRoot() override;
	bool hasHeavyweightDescendants();
	bool hasLightweightDescendants();
	void increaseComponentCount(::java::awt::Component* c);
	static void initIDs();
	virtual void initializeFocusTraversalKeys() override;
	virtual ::java::awt::Insets* insets();
	virtual void invalidate() override;
	virtual void invalidateParent() override;
	virtual void invalidateTree();
	virtual bool isAncestorOf(::java::awt::Component* c);
	virtual bool isFocusCycleRoot(::java::awt::Container* container) override;
	virtual bool isFocusCycleRoot();
	bool isFocusTraversalPolicyProvider();
	virtual bool isFocusTraversalPolicySet();
	bool isParentOf(::java::awt::Component* comp);
	bool isRecursivelyVisibleUpToHeavyweightContainer();
	static bool isRemoveNotifyNeeded(::java::awt::Component* comp, ::java::awt::Container* oldContainer, ::java::awt::Container* newContainer);
	virtual bool isSameOrAncestorOf(::java::awt::Component* comp, bool allowChildren) override;
	virtual bool isValidateRoot();
	static bool lambda$startLWModal$0(::java::awt::Container* nativeContainer);
	void lambda$startLWModal$1(::java::awt::Container* nativeContainer);
	virtual void layout() override;
	virtual void lightweightPaint(::java::awt::Graphics* g) override;
	virtual void lightweightPrint(::java::awt::Graphics* g) override;
	virtual void list(::java::io::PrintStream* out, int32_t indent) override;
	virtual void list(::java::io::PrintWriter* out, int32_t indent) override;
	virtual ::java::awt::Component* locate(int32_t x, int32_t y) override;
	virtual ::java::awt::Dimension* minimumSize() override;
	virtual void mixOnHiding(bool isLightweight) override;
	virtual void mixOnReshaping() override;
	virtual void mixOnShowing() override;
	virtual void mixOnValidating() override;
	virtual void mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder) override;
	virtual int32_t numListening(int64_t mask) override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintComponents(::java::awt::Graphics* g);
	virtual void paintHeavyweightComponents(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	virtual void postProcessKeyEvent(::java::awt::event::KeyEvent* e);
	virtual bool postsOldMouseEvents() override;
	virtual void preProcessKeyEvent(::java::awt::event::KeyEvent* e);
	virtual ::java::awt::Dimension* preferredSize() override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void printComponents(::java::awt::Graphics* g);
	virtual void printHeavyweightComponents(::java::awt::Graphics* g) override;
	virtual void processContainerEvent(::java::awt::event::ContainerEvent* e);
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	virtual void proxyEnableEvents(int64_t events);
	void readObject(::java::io::ObjectInputStream* s);
	void recursiveApplyCurrentShape();
	void recursiveApplyCurrentShape(int32_t fromZorder);
	void recursiveApplyCurrentShape(int32_t fromZorder, int32_t toZorder);
	void recursiveHideHeavyweightChildren();
	void recursiveRelocateHeavyweightChildren(::java::awt::Point* origin);
	void recursiveShowHeavyweightChildren();
	void recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape);
	void recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape, int32_t fromZorder);
	void recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape, int32_t fromZorder, int32_t toZorder);
	using ::java::awt::Component::remove;
	virtual void remove(int32_t index);
	virtual void remove(::java::awt::Component* comp);
	virtual void removeAll();
	virtual void removeContainerListener(::java::awt::event::ContainerListener* l);
	bool removeDelicately(::java::awt::Component* comp, ::java::awt::Container* newParent, int32_t newIndex);
	virtual void removeNotify() override;
	void reparentChild(::java::awt::Component* comp);
	void reparentTraverse(::java::awt::peer::ContainerPeer* parentPeer, ::java::awt::Container* child);
	virtual void setComponentZOrder(::java::awt::Component* comp, int32_t index);
	virtual void setFocusCycleRoot(bool focusCycleRoot);
	virtual void setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes) override;
	virtual void setFocusTraversalPolicy(::java::awt::FocusTraversalPolicy* policy);
	void setFocusTraversalPolicyProvider(bool provider);
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLayout(::java::awt::LayoutManager* mgr);
	void startLWModal();
	void stopLWModal();
	virtual void transferFocusDownCycle();
	virtual void update(::java::awt::Graphics* g) override;
	virtual bool updateChildGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void validate() override;
	virtual void validateTree();
	void validateUnconditionally();
	void writeObject(::java::io::ObjectOutputStream* s);
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* eventLog;
	static $Array<::java::awt::Component>* EMPTY_ARRAY;
	::java::util::List* component = nullptr;
	::java::awt::LayoutManager* layoutMgr = nullptr;
	::java::awt::LightweightDispatcher* dispatcher = nullptr;
	::java::awt::FocusTraversalPolicy* focusTraversalPolicy = nullptr;
	bool focusCycleRoot = false;
	bool focusTraversalPolicyProvider = false;
	::java::util::Set* printingThreads = nullptr;
	bool printing = false;
	::java::awt::event::ContainerListener* containerListener = nullptr;
	int32_t listeningChildren = 0;
	int32_t listeningBoundsChildren = 0;
	int32_t descendantsCount = 0;
	::java::awt::Color* preserveBackgroundColor = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x40078073FD140C27;
	static const bool INCLUDE_SELF = true;
	static const bool SEARCH_HEAVYWEIGHTS = true;
	int32_t numOfHWComponents = 0;
	int32_t numOfLWComponents = 0;
	static ::sun::util::logging::PlatformLogger* mixingLog;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool isJavaAwtSmartInvalidate;
	static bool descendUnconditionallyWhenValidating;
	::java::awt::Component* modalComp = nullptr;
	::sun::awt::AppContext* modalAppContext = nullptr;
	int32_t containerSerializedDataVersion = 0;
};

	} // awt
} // java

#pragma pop_macro("EMPTY_ARRAY")
#pragma pop_macro("INCLUDE_SELF")
#pragma pop_macro("SEARCH_HEAVYWEIGHTS")

#endif // _java_awt_Container_h_