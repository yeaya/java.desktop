#ifndef _javax_swing_plaf_synth_SynthTreeUI_h_
#define _javax_swing_plaf_synth_SynthTreeUI_h_
//$ class javax.swing.plaf.synth.SynthTreeUI
//$ extends javax.swing.plaf.basic.BasicTreeUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JTree;
		class JTree$DropLocation;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
				class SynthContext;
				class SynthStyle;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultTreeCellRenderer;
			class TreeCellEditor;
			class TreeCellRenderer;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthTreeUI : public ::javax::swing::plaf::basic::BasicTreeUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthTreeUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTreeUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthTreeUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::JTree* access$000(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::JTree* access$100(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::Icon* access$200(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::Icon* access$300(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::JTree* access$400(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::Icon* access$500(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::Icon* access$600(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::JTree* access$700(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::Icon* access$800(::javax::swing::plaf::synth::SynthTreeUI* x0);
	static ::javax::swing::Icon* access$900(::javax::swing::plaf::synth::SynthTreeUI* x0);
	void configureRenderer(::javax::swing::plaf::synth::SynthContext* context);
	virtual ::javax::swing::tree::TreeCellEditor* createDefaultCellEditor() override;
	virtual ::javax::swing::tree::TreeCellRenderer* createDefaultCellRenderer() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void drawCentered(::java::awt::Component* c, ::java::awt::Graphics* graphics, ::javax::swing::Icon* icon, int32_t x, int32_t y) override;
	int32_t findCenteredX(int32_t x, int32_t iconWidth);
	int32_t getComponentState(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region, int32_t state);
	virtual ::javax::swing::Icon* getExpandedIcon() override;
	virtual int32_t getRowX(int32_t row, int32_t depth) override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintDropLine(::java::awt::Graphics* g) override;
	virtual void paintExpandControl(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) override;
	virtual void paintHorizontalLine(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t y, int32_t left, int32_t right) override;
	virtual void paintHorizontalPartOfLeg(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) override;
	using ::javax::swing::plaf::basic::BasicTreeUI::paintRow;
	void paintRow(::javax::swing::tree::TreeCellRenderer* renderer, ::javax::swing::tree::DefaultTreeCellRenderer* dtcr, ::javax::swing::plaf::synth::SynthContext* treeContext, ::javax::swing::plaf::synth::SynthContext* cellContext, ::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::java::awt::Rectangle* rowBounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf);
	virtual void paintVerticalLine(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t x, int32_t top, int32_t bottom) override;
	virtual void paintVerticalPartOfLeg(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::javax::swing::tree::TreePath* path) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	void repaintDropLocation(::javax::swing::JTree$DropLocation* loc);
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JTree* tree);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthStyle* cellStyle = nullptr;
	::javax::swing::plaf::synth::SynthContext* paintContext = nullptr;
	bool drawHorizontalLines = false;
	bool drawVerticalLines = false;
	$Object* linesStyle = nullptr;
	int32_t padding = 0;
	bool useTreeColors = false;
	::javax::swing::Icon* expandedIconWrapper = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTreeUI_h_