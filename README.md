# Projet CoDesign - Compte Rendu
## Sommaire
1. [Introduction](#introduction)
2. [Profilage](#profilage)
3. [ARM9 - Zynq](#arm9---Zynq)
4. [High Level Synthesis - HLS](#high-level-synthesis---hls)

## Introduction

L'objectif du projet était d'implémenter une IA de reconnaissance de chiffres manuscrits puis de la téléverser sur une carte FPGA (Xilinx Zynq-7000) à l'aide de l'environnement de développement Vivado.

## Profilage

Dans cette partie, nous avons effectué le profil d’éxecution d’un programme écrit en langage C qui éxecute un réseau de neurones (Lenet-Simard) de reconnaissance de caractères.
![Schéma du réseau Lenet-Simard](.png)

## ARM9 - Zynq

Dans cette partie , nous allons éxecuter sur processeur ARM le code Lenet précédemmment effectué lors du profilage. 
Pour cela il faudra d’abord instancier sur Vivado le processeur, puis développer la partie code source sur SDK qui sera éxecutée par le processeur.
