##########################################################################
#                                                                        #
#  This file is part of WP plug-in of Frama-C.                           #
#                                                                        #
#  Copyright (C) 2007-2011                                               #
#    CEA (Commissariat a l'�nergie atomique et aux �nergies              #
#         alternatives)                                                  #
#                                                                        #
#  you can redistribute it and/or modify it under the terms of the GNU   #
#  Lesser General Public License as published by the Free Software       #
#  Foundation, version 2.1.                                              #
#                                                                        #
#  It is distributed in the hope that it will be useful,                 #
#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
#  GNU Lesser General Public License for more details.                   #
#                                                                        #
#  See the GNU Lesser General Public License version 2.1                 #
#  for more details (enclosed in the file licenses/LGPLv2.1).            #
#                                                                        #
##########################################################################

## TODO: bug in Makefile.in with generated wp_version.ml
.PHONY: version

## WP_KERNEL=Carbon-20110201+dev
## WP_VERSION=0.3+dev

# Do not use ?= to initialize both below variables
# (fixed efficiency issue, see GNU Make manual, Section 8.11)
ifndef FRAMAC_SHARE
FRAMAC_SHARE  :=$(shell frama-c -journal-disable -print-path)
endif
ifndef FRAMAC_LIBDIR
FRAMAC_LIBDIR :=$(shell frama-c -journal-disable -print-libpath)
endif
PLUGIN_DIR ?=.

ALTERGO_VERSION=0.9
WHY=why
COQ=coqc
ALTERGO=alt-ergo
WHYDP=why-dp

include $(FRAMAC_SHARE)/Makefile.config

MODELS:= share/wp.v \
	share/hoare_model.v \
	share/hoare_model.why \
	share/hoare_ergo.why \
	share/store_model.v \
	share/store_model.why \
	share/store_ergo.why \
	share/runtime_model.v \
	share/runtime_model.why \
	share/runtime_ergo.why \

# Extension of the GUI for wp is compilable
# only if gnomecanvas is available
ifeq ($(HAS_GNOMECANVAS),yes)
PLUGIN_GUI_CMO:= po_navigator wp_gui
PLUGIN_UNDOC:=
else
PLUGIN_UNDOC:= po_navigator.ml wp_gui.ml
endif

PLUGIN_ENABLE:=partial
PLUGIN_DYNAMIC:=yes
PLUGIN_NAME:=Wp
PLUGIN_CMO:= \
	wprop \
	wp_parameters wp_error \
	ctypes clabels \
	cil2cfg normAtLabels \
	wpPropId wpStrategy wpFroms wpAnnot \
	script proof \
	wpo prover \
	variables_analysis datalib \
	fol fol_let fol_decl fol_pretty \
	data_mem \
	mint_natural mfloat_natural \
	funvar_mem runtime_mem store_mem hoare_mem \
	fol_cc fol_eqs fol_eval fol_norm \
	fol_split fol_why fol_ergo kreal fol_coq \
	fol_formula \
	LogicId LogicTau LogicRaw LogicPretty LogicLang \
	LogicLib LogicHavoc LogicDef \
	ACSL \
	translate_expr \
	translate_prop \
	calculus cfgpropid \
	cfgWeakestPrecondition \
	cfgProof \
	register

PLUGIN_CMI:= \
	mcfg formula \
	mint mfloat mvalues mlogic mwp

PLUGIN_GENERATED:= $(PLUGIN_DIR)/script.ml 
# $(PLUGIN_DIR)/wp_version.ml

PLUGIN_UNDOC+= fol_qed.mli fol_qed.ml
PLUGIN_INTRO:=$(FRAMAC_SRC)/doc/code/intro_wp.txt
PLUGIN_HAS_MLI:=yes
PLUGIN_DISTRIBUTED:=$(PLUGIN_ENABLE)
PLUGIN_DISTRIB_EXTERNAL:= Makefile.in configure.ac configure $(MODELS)

ifeq ("$(OCAMLGRAPH_LOCAL)","")
OFLAGS+=-I +ocamlgraph
BFLAGS+=-I +ocamlgraph
endif

# --------------------------------------------------------------------------
# --- Tests                                                              ---
# --------------------------------------------------------------------------

PLUGIN_TESTS_DIRS:= wp wp_plugin wp_acsl wp_store wp_hoare wp_runtime wp_bts wp_engine
#PLUGIN_NO_TESTS:=no
#PLUGIN_NO_DEFAULT_TEST:=yes

# --------------------------------------------------------------------------
# --- Dynamic Plugin                                                     ---
# --------------------------------------------------------------------------

include $(FRAMAC_SHARE)/Makefile.dynamic

# Regenerating the Makefile on need

ifeq ("$(FRAMAC_INTERNAL)","yes")
CONFIG_STATUS_DIR=$(FRAMAC_SRC)
else
CONFIG_STATUS_DIR=.
endif

## Bug with Makefile.in : the wp_version.ml is systematically re-generated
## [BM] 04/22/2011 seems to be fixed
# $(Wp_DIR)/wp_version.ml: $(Wp_DIR)/Makefile.in
# 	@echo "Generate wp_version.ml"
# 	@echo 'let kernel = "$(WP_KERNEL)"' > $@
# 	@echo 'let version = "$(WP_VERSION)"' >> $@
# 	@headache -c headers/headache_config.txt -h headers/CEA_LGPL $@

## Removing dependency to headache.
#	@headache -c headers/headache_config.txt -h headers/CEA_LGPL $@

$(Wp_DIR)/Makefile: $(Wp_DIR)/Makefile.in $(CONFIG_STATUS_DIR)/config.status
	@cd $(CONFIG_STATUS_DIR) && ./config.status
	@make depend

install::
	$(MKDIR) $(FRAMAC_DATADIR)/wp
	$(CP) $(addprefix $(Wp_DIR)/,$(MODELS)) $(FRAMAC_DATADIR)/wp

# --------------------------------------------------------------------------
# --- WP Release Stuff (CEA-LIST Only)
# --------------------------------------------------------------------------
sinclude MakeDistrib
# --------------------------------------------------------------------------
