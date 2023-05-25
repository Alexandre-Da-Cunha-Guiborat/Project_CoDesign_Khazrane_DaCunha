# Projet CoDesign - Compte Rendu

## Sommaire

1. [Introduction](#introduction)
2. [Profilage](#profilage)
3. [ARM9 - Zynq](#arm9---zynq)
4. [High Level Synthesis - HLS](#high-level-synthesis---hls)

## Introduction

L'objectif du projet était d'implémenter une IA de reconnaissance de chiffres manuscrits puis de la téléverser sur une carte FPGA (Xilinx Zynq-7000) à l'aide de l'environnement de développement Vivado.


## Profilage

Dans cette partie, nous avons effectué le profil d’éxecution d’un programme écrit en langage C qui éxecute un réseau de neurones (Lenet-Simard) de reconnaissance de caractères.
![Schéma du réseau Lenet-Simard](Alexandre-Da-Cunha-Guiborat/Project_CoDesign_Khazrane_DaCunha/edit/main/reseau lenet.png)

Pour cela, on a utiliser la fonction Dtime(). En lançant a plusieur reprise le code nous avons obtenues les résultats.

| InitHostMem | calculateLayer1 | calculateLayer2 | calculateLayer3 | calculateLayer4 | calculateLayer5 |
| ----------- | --------------- | --------------- | --------------- | --------------- | --------------- |
| 0.000000    | 0.000000        | 0.001284        | 0.000000        | 0.000000        | 0.000000        |
| 0.000000    | 0.000000        | 0.000000        | 0.003562        | 0.000000        | 0.000000        |

On remarque alors que le temps de calcul du réseaux est localiser dans les Layer2 et Layer3.


## ARM9 - Zynq

Dans cette partie , nous allons éxecuter sur processeur ARM le code Lenet précédemmment effectué lors du profilage.
Pour cela il faudra d’abord instancier sur Vivado le processeur, puis développer la partie code source sur SDK qui sera éxecutée par le processeur.

Le côut en temps est encore plus grand une fois le code mis sur le processeur Arm.

Ainsi, nous avons décider de mettre ces partis du code en Hardware pour accelerer le calcul.


## High Level Synthesis - HLS

Pour cela, on s'est penchée sur Vivado HLS, qui permet de transformer du code C en bitstream pour programmer la carte.

On s'est fixé pour objectif d'implementer la Layer2 et la Layer3 en hardware et de maintenir une latence inférieur à la milliseconde ainsi qu'une clock a 10ns.
