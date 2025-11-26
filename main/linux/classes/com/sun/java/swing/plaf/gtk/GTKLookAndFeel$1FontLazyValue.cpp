#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$1FontLazyValue.h>

#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <java/awt/Font.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKLookAndFeel$1FontLazyValue_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$1FontLazyValue, this$0)},
	{"region", "Ljavax/swing/plaf/synth/Region;", nullptr, $PRIVATE, $field(GTKLookAndFeel$1FontLazyValue, region)},
	{}
};

$MethodInfo _GTKLookAndFeel$1FontLazyValue_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;Ljavax/swing/plaf/synth/Region;)V", nullptr, 0, $method(static_cast<void(GTKLookAndFeel$1FontLazyValue::*)($GTKLookAndFeel*,$Region*)>(&GTKLookAndFeel$1FontLazyValue::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GTKLookAndFeel$1FontLazyValue_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _GTKLookAndFeel$1FontLazyValue_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1FontLazyValue", nullptr, "FontLazyValue", 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GTKLookAndFeel$1FontLazyValue_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1FontLazyValue",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_GTKLookAndFeel$1FontLazyValue_FieldInfo_,
	_GTKLookAndFeel$1FontLazyValue_MethodInfo_,
	nullptr,
	&_GTKLookAndFeel$1FontLazyValue_EnclosingMethodInfo_,
	_GTKLookAndFeel$1FontLazyValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
};

$Object* allocate$GTKLookAndFeel$1FontLazyValue($Class* clazz) {
	return $of($alloc(GTKLookAndFeel$1FontLazyValue));
}

void GTKLookAndFeel$1FontLazyValue::init$($GTKLookAndFeel* this$0, $Region* region) {
	$set(this, this$0, this$0);
	$set(this, region, region);
}

$Object* GTKLookAndFeel$1FontLazyValue::createValue($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($SynthStyleFactory, factory, $SynthLookAndFeel::getStyleFactory());
	$var($GTKStyle, style, $cast($GTKStyle, $nc(factory)->getStyle(nullptr, this->region)));
	return $of($nc(style)->getDefaultFont());
}

GTKLookAndFeel$1FontLazyValue::GTKLookAndFeel$1FontLazyValue() {
}

$Class* GTKLookAndFeel$1FontLazyValue::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$1FontLazyValue, name, initialize, &_GTKLookAndFeel$1FontLazyValue_ClassInfo_, allocate$GTKLookAndFeel$1FontLazyValue);
	return class$;
}

$Class* GTKLookAndFeel$1FontLazyValue::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com