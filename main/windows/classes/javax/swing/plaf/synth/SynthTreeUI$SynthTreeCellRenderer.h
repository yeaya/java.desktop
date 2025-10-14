#ifndef _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellRenderer_h_
#define _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellRenderer_h_
//$ class javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellRenderer
//$ extends javax.swing.tree.DefaultTreeCellRenderer
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTreeUI$SynthTreeCellRenderer : public ::javax::swing::tree::DefaultTreeCellRenderer, public ::javax::swing::plaf::UIResource {
	$class(SynthTreeUI$SynthTreeCellRenderer, 0, ::javax::swing::tree::DefaultTreeCellRenderer, ::javax::swing::plaf::UIResource)
public:
	SynthTreeUI$SynthTreeCellRenderer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::tree::DefaultTreeCellRenderer::contains;
	using ::javax::swing::tree::DefaultTreeCellRenderer::enable;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getBounds;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getSize;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getLocation;
	using ::javax::swing::tree::DefaultTreeCellRenderer::add;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getMousePosition;
	using ::javax::swing::tree::DefaultTreeCellRenderer::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::synth::SynthTreeUI* this$0);
	virtual $String* getName() override;
	virtual ::java::awt::Component* getTreeCellRendererComponent(::javax::swing::JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) override;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::tree::DefaultTreeCellRenderer::repaint;
	using ::javax::swing::tree::DefaultTreeCellRenderer::setUI;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocus;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocusInWindow;
	using ::javax::swing::tree::DefaultTreeCellRenderer::remove;
	virtual $String* toString() override;
	::javax::swing::plaf::synth::SynthTreeUI* this$0 = nullptr;
	static bool $assertionsDisabled;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellRenderer_h_