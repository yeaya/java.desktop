#ifndef _com_apple_laf_AquaTableHeaderUI_h_
#define _com_apple_laf_AquaTableHeaderUI_h_
//$ class com.apple.laf.AquaTableHeaderUI
//$ extends javax.swing.plaf.basic.BasicTableHeaderUI

#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>

#pragma push_macro("TABLE_HEADER_APPLICATORS")
#undef TABLE_HEADER_APPLICATORS

namespace com {
	namespace apple {
		namespace laf {
			class AquaTableHeaderBorder;
			class AquaUtils$RecyclableSingleton;
			class ClientPropertyApplicator;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
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
		namespace table {
			class JTableHeader;
			class TableColumn;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTableHeaderUI : public ::javax::swing::plaf::basic::BasicTableHeaderUI {
	$class(AquaTableHeaderUI, 0, ::javax::swing::plaf::basic::BasicTableHeaderUI)
public:
	AquaTableHeaderUI();
	void init$();
	static ::javax::swing::table::JTableHeader* access$000(::com::apple::laf::AquaTableHeaderUI* x0);
	static ::javax::swing::table::JTableHeader* access$100(::com::apple::laf::AquaTableHeaderUI* x0);
	static ::javax::swing::table::JTableHeader* access$200(::com::apple::laf::AquaTableHeaderUI* x0);
	::java::awt::Dimension* createHeaderSizeAqua(int64_t width);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::com::apple::laf::AquaTableHeaderBorder* getAquaBorderFrom(::javax::swing::table::JTableHeader* header, ::javax::swing::table::TableColumn* column);
	int32_t getHeaderHeightAqua();
	::java::awt::Component* getHeaderRendererAqua(int32_t columnIndex);
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	static ::javax::swing::table::TableColumn* getTableColumn(::javax::swing::table::JTableHeader* target, Object$* value);
	static ::com::apple::laf::ClientPropertyApplicator* getTableHeaderApplicators();
	virtual void installDefaults() override;
	virtual void installListeners() override;
	static void tickle(::javax::swing::table::JTableHeader* target, Object$* selectedColumn, Object$* direction);
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	int32_t originalHeaderAlignment = 0;
	int32_t sortColumn = 0;
	int32_t sortOrder = 0;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* TABLE_HEADER_APPLICATORS;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("TABLE_HEADER_APPLICATORS")

#endif // _com_apple_laf_AquaTableHeaderUI_h_