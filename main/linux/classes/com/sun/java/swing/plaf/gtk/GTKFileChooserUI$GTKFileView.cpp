#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFileView.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/Hashtable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $BasicFileChooserUI$BasicFileView = ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$GTKFileView_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKFileView, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$GTKFileView_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(GTKFileChooserUI$GTKFileView::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$GTKFileView::init$))},
	{"cacheIcon", "(Ljava/io/File;Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"clearIconCache", "()V", nullptr, $PUBLIC},
	{"getCachedIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$GTKFileView_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileView", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKFileView", $PRIVATE},
	{"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView", "javax.swing.plaf.basic.BasicFileChooserUI", "BasicFileView", $PROTECTED},
	{}
};

$ClassInfo _GTKFileChooserUI$GTKFileView_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileView",
	"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView",
	nullptr,
	_GTKFileChooserUI$GTKFileView_FieldInfo_,
	_GTKFileChooserUI$GTKFileView_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$GTKFileView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$GTKFileView($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$GTKFileView));
}

void GTKFileChooserUI$GTKFileView::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$BasicFileChooserUI$BasicFileView::init$(this$0);
	$set(this, iconCache, nullptr);
}

void GTKFileChooserUI$GTKFileView::clearIconCache() {
}

$Icon* GTKFileChooserUI$GTKFileView::getCachedIcon($File* f) {
	return nullptr;
}

void GTKFileChooserUI$GTKFileView::cacheIcon($File* f, $Icon* i) {
}

$Icon* GTKFileChooserUI$GTKFileView::getIcon($File* f) {
	return (f != nullptr && f->isDirectory()) ? $GTKFileChooserUI::access$000(this->this$0) : $GTKFileChooserUI::access$100(this->this$0);
}

GTKFileChooserUI$GTKFileView::GTKFileChooserUI$GTKFileView() {
}

$Class* GTKFileChooserUI$GTKFileView::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$GTKFileView, name, initialize, &_GTKFileChooserUI$GTKFileView_ClassInfo_, allocate$GTKFileChooserUI$GTKFileView);
	return class$;
}

$Class* GTKFileChooserUI$GTKFileView::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com