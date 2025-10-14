#ifndef _UpdateUIRecursionTest_h_
#define _UpdateUIRecursionTest_h_
//$ class UpdateUIRecursionTest
//$ extends javax.swing.JFrame
//$ implements javax.swing.tree.TreeCellRenderer

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/tree/TreeCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultTreeCellRenderer;
		}
	}
}

class $export UpdateUIRecursionTest : public ::javax::swing::JFrame, public ::javax::swing::tree::TreeCellRenderer {
	$class(UpdateUIRecursionTest, $NO_CLASS_INIT, ::javax::swing::JFrame, ::javax::swing::tree::TreeCellRenderer)
public:
	UpdateUIRecursionTest();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void disposeUI();
	virtual ::java::awt::Component* getTreeCellRendererComponent(::javax::swing::JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) override;
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	virtual void test();
	virtual $String* toString() override;
	::javax::swing::JTree* tree = nullptr;
	::javax::swing::tree::DefaultTreeCellRenderer* renderer = nullptr;
};

#endif // _UpdateUIRecursionTest_h_