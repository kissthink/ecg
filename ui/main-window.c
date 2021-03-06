/* main-window.c generated by valac 0.21.1, the Vala compiler
 * generated from main-window.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <gdk/gdk.h>


#define TYPE_MAIN_WINDOW (main_window_get_type ())
#define MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN_WINDOW, MainWindow))
#define MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN_WINDOW, MainWindowClass))
#define IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN_WINDOW))
#define IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN_WINDOW))
#define MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN_WINDOW, MainWindowClass))

typedef struct _MainWindow MainWindow;
typedef struct _MainWindowClass MainWindowClass;
typedef struct _MainWindowPrivate MainWindowPrivate;

#define TYPE_ECG_MONITOR (ecg_monitor_get_type ())
#define ECG_MONITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ECG_MONITOR, ECGMonitor))
#define ECG_MONITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ECG_MONITOR, ECGMonitorClass))
#define IS_ECG_MONITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ECG_MONITOR))
#define IS_ECG_MONITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ECG_MONITOR))
#define ECG_MONITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ECG_MONITOR, ECGMonitorClass))

typedef struct _ECGMonitor ECGMonitor;
typedef struct _ECGMonitorClass ECGMonitorClass;
typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_MAIN_MENU (main_menu_get_type ())
#define MAIN_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN_MENU, MainMenu))
#define MAIN_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN_MENU, MainMenuClass))
#define IS_MAIN_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN_MENU))
#define IS_MAIN_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN_MENU))
#define MAIN_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN_MENU, MainMenuClass))

typedef struct _MainMenu MainMenu;
typedef struct _MainMenuClass MainMenuClass;

struct _MainWindow {
	GtkApplicationWindow parent_instance;
	MainWindowPrivate * priv;
};

struct _MainWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	MainWindow * self;
	ECGMonitor* monitor;
	GtkScrollbar* scrollbar;
};


static gpointer main_window_parent_class = NULL;

GType main_window_get_type (void) G_GNUC_CONST;
enum  {
	MAIN_WINDOW_DUMMY_PROPERTY
};
MainWindow* main_window_new (GtkApplication* application);
MainWindow* main_window_construct (GType object_type, GtkApplication* application);
GType ecg_monitor_get_type (void) G_GNUC_CONST;
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
GType main_menu_get_type (void) G_GNUC_CONST;
MainMenu* main_menu_new (void);
MainMenu* main_menu_construct (GType object_type);
static void __lambda8_ (MainWindow* self);
static void ___lambda8__main_menu_quit_item_activated (MainMenu* _sender, gpointer self);
ECGMonitor* ecg_monitor_new (void);
ECGMonitor* ecg_monitor_construct (GType object_type);
static void __lambda9_ (Block1Data* _data1_, const gchar* path);
void ecg_monitor_load (ECGMonitor* self, const gchar* path);
gint ecg_monitor_get_ecg_size (ECGMonitor* self);
static void ___lambda9__main_menu_open_file_item_activated (MainMenu* _sender, const gchar* path, gpointer self);
void ecg_monitor_show_limb_leads (ECGMonitor* self);
static void _ecg_monitor_show_limb_leads_main_menu_limb_leads_item_activated (MainMenu* _sender, gpointer self);
void ecg_monitor_show_augment_limb_leads (ECGMonitor* self);
static void _ecg_monitor_show_augment_limb_leads_main_menu_augment_limb_leads_item_activated (MainMenu* _sender, gpointer self);
void ecg_monitor_show_chest_leads (ECGMonitor* self);
static void _ecg_monitor_show_chest_leads_main_menu_chest_leads_item_activated (MainMenu* _sender, gpointer self);
static void __lambda10_ (Block1Data* _data1_);
void ecg_monitor_set_ecg_shift (ECGMonitor* self, gint shift);
static void ___lambda10__gtk_range_value_changed (GtkRange* _sender, gpointer self);
static gboolean __lambda11_ (Block1Data* _data1_);
gint ecg_monitor_get_ecg_shift (ECGMonitor* self);
static gboolean ___lambda11__gtk_widget_key_press_event (GtkWidget* _sender, GdkEventKey* event, gpointer self);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		MainWindow * self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->scrollbar);
		_g_object_unref0 (_data1_->monitor);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static void __lambda8_ (MainWindow* self) {
	gtk_widget_destroy ((GtkWidget*) self);
}


static void ___lambda8__main_menu_quit_item_activated (MainMenu* _sender, gpointer self) {
	__lambda8_ (self);
}


static void __lambda9_ (Block1Data* _data1_, const gchar* path) {
	MainWindow * self;
	const gchar* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	self = _data1_->self;
	g_return_if_fail (path != NULL);
	_tmp0_ = path;
	ecg_monitor_load (_data1_->monitor, _tmp0_);
	_tmp1_ = ecg_monitor_get_ecg_size (_data1_->monitor);
	gtk_range_set_range ((GtkRange*) _data1_->scrollbar, (gdouble) 0, (gdouble) _tmp1_);
}


static void ___lambda9__main_menu_open_file_item_activated (MainMenu* _sender, const gchar* path, gpointer self) {
	__lambda9_ (self, path);
}


static void _ecg_monitor_show_limb_leads_main_menu_limb_leads_item_activated (MainMenu* _sender, gpointer self) {
	ecg_monitor_show_limb_leads (self);
}


static void _ecg_monitor_show_augment_limb_leads_main_menu_augment_limb_leads_item_activated (MainMenu* _sender, gpointer self) {
	ecg_monitor_show_augment_limb_leads (self);
}


static void _ecg_monitor_show_chest_leads_main_menu_chest_leads_item_activated (MainMenu* _sender, gpointer self) {
	ecg_monitor_show_chest_leads (self);
}


static void __lambda10_ (Block1Data* _data1_) {
	MainWindow * self;
	gdouble _tmp0_ = 0.0;
	self = _data1_->self;
	_tmp0_ = gtk_range_get_value ((GtkRange*) _data1_->scrollbar);
	ecg_monitor_set_ecg_shift (_data1_->monitor, (gint) _tmp0_);
}


static void ___lambda10__gtk_range_value_changed (GtkRange* _sender, gpointer self) {
	__lambda10_ (self);
}


static gboolean __lambda11_ (Block1Data* _data1_) {
	MainWindow * self;
	gboolean result = FALSE;
	gint new_shift = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	self = _data1_->self;
	_tmp0_ = ecg_monitor_get_ecg_shift (_data1_->monitor);
	new_shift = _tmp0_;
	_tmp1_ = new_shift;
	new_shift = _tmp1_ + 1;
	_tmp2_ = new_shift;
	ecg_monitor_set_ecg_shift (_data1_->monitor, _tmp2_);
	result = TRUE;
	return result;
}


static gboolean ___lambda11__gtk_widget_key_press_event (GtkWidget* _sender, GdkEventKey* event, gpointer self) {
	gboolean result;
	result = __lambda11_ (self);
	return result;
}


MainWindow* main_window_construct (GType object_type, GtkApplication* application) {
	MainWindow * self = NULL;
	Block1Data* _data1_;
	GtkApplication* _tmp0_ = NULL;
	GtkBox* box = NULL;
	GtkBox* _tmp1_ = NULL;
	MainMenu* menu = NULL;
	MainMenu* _tmp2_ = NULL;
	ECGMonitor* _tmp3_ = NULL;
	GtkScrollbar* _tmp4_ = NULL;
	g_return_val_if_fail (application != NULL, NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_tmp0_ = application;
	self = (MainWindow*) g_object_new (object_type, "application", _tmp0_, "title", "ECG Viewer", NULL);
	_data1_->self = g_object_ref (self);
	gtk_container_set_border_width ((GtkContainer*) self, (guint) 0);
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
	gtk_window_set_default_size ((GtkWindow*) self, 800, 600);
	_tmp1_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
	g_object_ref_sink (_tmp1_);
	box = _tmp1_;
	_tmp2_ = main_menu_new ();
	g_object_ref_sink (_tmp2_);
	menu = _tmp2_;
	g_signal_connect_object (menu, "quit-item-activated", (GCallback) ___lambda8__main_menu_quit_item_activated, self, 0);
	gtk_box_pack_start (box, (GtkWidget*) menu, FALSE, TRUE, (guint) 0);
	_tmp3_ = ecg_monitor_new ();
	g_object_ref_sink (_tmp3_);
	_data1_->monitor = _tmp3_;
	_tmp4_ = (GtkScrollbar*) gtk_scrollbar_new (GTK_ORIENTATION_HORIZONTAL, NULL);
	g_object_ref_sink (_tmp4_);
	_data1_->scrollbar = _tmp4_;
	g_signal_connect_data (menu, "open-file-item-activated", (GCallback) ___lambda9__main_menu_open_file_item_activated, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	g_signal_connect_object (menu, "limb-leads-item-activated", (GCallback) _ecg_monitor_show_limb_leads_main_menu_limb_leads_item_activated, _data1_->monitor, 0);
	g_signal_connect_object (menu, "augment-limb-leads-item-activated", (GCallback) _ecg_monitor_show_augment_limb_leads_main_menu_augment_limb_leads_item_activated, _data1_->monitor, 0);
	g_signal_connect_object (menu, "chest-leads-item-activated", (GCallback) _ecg_monitor_show_chest_leads_main_menu_chest_leads_item_activated, _data1_->monitor, 0);
	gtk_box_pack_start (box, (GtkWidget*) _data1_->monitor, TRUE, TRUE, (guint) 0);
	g_signal_connect_data ((GtkRange*) _data1_->scrollbar, "value-changed", (GCallback) ___lambda10__gtk_range_value_changed, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	gtk_box_pack_start (box, (GtkWidget*) _data1_->scrollbar, FALSE, TRUE, (guint) 0);
	g_signal_connect_data ((GtkWidget*) self, "key-press-event", (GCallback) ___lambda11__gtk_widget_key_press_event, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) box);
	_g_object_unref0 (menu);
	_g_object_unref0 (box);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return self;
}


MainWindow* main_window_new (GtkApplication* application) {
	return main_window_construct (TYPE_MAIN_WINDOW, application);
}


static void main_window_class_init (MainWindowClass * klass) {
	main_window_parent_class = g_type_class_peek_parent (klass);
}


static void main_window_instance_init (MainWindow * self) {
}


GType main_window_get_type (void) {
	static volatile gsize main_window_type_id__volatile = 0;
	if (g_once_init_enter (&main_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MainWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) main_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MainWindow), 0, (GInstanceInitFunc) main_window_instance_init, NULL };
		GType main_window_type_id;
		main_window_type_id = g_type_register_static (GTK_TYPE_APPLICATION_WINDOW, "MainWindow", &g_define_type_info, 0);
		g_once_init_leave (&main_window_type_id__volatile, main_window_type_id);
	}
	return main_window_type_id__volatile;
}



