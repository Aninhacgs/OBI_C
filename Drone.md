# Olimpíada Brasileira de Informática - Programação Nível Júnior
<h2>Drone de Entrega</h2>
<p>A loja do Pará, especializada em vendas pela internet, está desenvolvendo drones para entrega de caixas com as compras dos clientes. Cada caixa tem a forma de um paralelepípedo reto retângulo (ou seja, no formato de um tijolo).</p>

<p>O drone entregará uma caixa de cada vez, e colocará a caixa diretamente dentro da casa do cliente, através de uma janela. Todas as janelas dos clientes têm o formato retangular e estão sempre totalmente abertas. O drone tem um aplicativo de visão computacional que calcula exatamente as dimensões H e L da janela. O drone consegue colocar a caixa através da janela somente quando uma das faces da caixa está paralela à janela, mas consegue virar e rotacionar a caixa antes de passá-la pela janela.</p>

<p>O aplicativo de controle do drone está quase pronto, mas falta um pequeno detalhe: um programa que, dadas as dimensões da maior janela do cliente e as dimensões da caixa que deve ser entregue, determine se o drone vai ser capaz de entregar a compra (pela janela) ou se a compra terá que ser entregue por meios normais.</p>

<p><b>Entrada</b></p>
<p>A entrada é composta por cinco linhas, cada uma contendo um número inteiro. A três primeiras linhas contêm os valores A, B, C, indicando as três dimensões da caixa, em centímetros. As duas últimas linhas contêm os valores H e L, indicando a altura e a largura da janela, em centímetros.</p>
<p><b>Saída</b></p>
<p>Seu programa deve escrever uma única linha, contendo apenas a letra S se a caixa passa pela janela e apenas a letra N em caso contrário.</p>
<p><b>Restrições</b></p>
<li>1 ≤ A, B, C ≤ 100</li>
<li>1 ≤ H, L ≤ 100</li></br></br>

![ResultadoSubmissaoDroneEntrega](https://user-images.githubusercontent.com/11504380/73946398-a105cd00-48d4-11ea-99db-1a78af45c2fe.png)
