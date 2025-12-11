#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$LazyActionMap_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$LazyActionMap_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$LazyActionMap
//$ extends javax.swing.plaf.ActionMapUIResource

#include <java/lang/Array.h>
#include <javax/swing/plaf/ActionMapUIResource.h>

namespace javax {
	namespace swing {
		class Action;
		class ActionMap;
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$LazyActionMap : public ::javax::swing::plaf::ActionMapUIResource {
	$class(AquaTabbedPaneCopyFromBasicUI$LazyActionMap, 0, ::javax::swing::plaf::ActionMapUIResource)
public:
	AquaTabbedPaneCopyFromBasicUI$LazyActionMap();
	void init$($Class* loader);
	virtual $ObjectArray* allKeys() override;
	virtual void clear() override;
	virtual ::javax::swing::Action* get(Object$* key) override;
	static ::javax::swing::ActionMap* getActionMap($Class* loaderClass, $String* defaultsKey);
	static void installLazyActionMap(::javax::swing::JComponent* c, $Class* loaderClass, $String* defaultsKey);
	virtual $ObjectArray* keys() override;
	void loadIfNecessary();
	virtual void put(::javax::swing::Action* action);
	virtual void put(Object$* key, ::javax::swing::Action* action) override;
	virtual void remove(Object$* key) override;
	virtual void setParent(::javax::swing::ActionMap* map) override;
	virtual int32_t size() override;
	static bool $assertionsDisabled;
	$Object* _loader = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$LazyActionMap_h_