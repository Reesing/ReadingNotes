# Chapter02 Consensus Expected Returns: The Capital Asset Pricing Model

## Introduction

- This chapter is an **exposition** of CAPM, not a **defense**. The exploration has two purpose:
    - to establish the humility principle. It is not easy to be a successful active manager.
    - much of the analysis developed in CAPM can be used in quantitive active management.

- One of the valuable by-products of CAPM : a procedure for determining consensus expected returns.

- Major points of this chapter:
    - Stock return can be seperated into [ **a systematic (market) component** ] and [ **a residual component** ].
    - CAPM says that **expected value of residual return is 0**.
    - There is a powerful logic of market efficiency behind CAPM.
    - CAPM suggests that passive management is a lower-risk alternative to active management.
    - CAPM provides a valuable source of consensus expectations.
    - CAPM is about expected returns, not risk.

- When selecting portfolios according to mean/variance perferences,
    - CAPM forecasts of expected returns -> portfolios consist of market positions and risk-free asset.
    - optimal mean/variance portfolios differ from market portfolio and cash, if and only if the forecast excess returns differ from CAPM consensus expected return.

## Seperation of Return

- In practice, the [ market portfolio ] is taken as some [ broad value-weighted index of traded domestic equities ].

- **excess returns** = total returns - total return on risk-free asset

- Beta of portfolio P:

    <a href="https://www.codecogs.com/eqnedit.php?latex=\beta_P&space;=&space;\frac{\textup{Cov}(r_P,r_M)}{\textup{Var}(r_M)}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\beta_P&space;=&space;\frac{\textup{Cov}(r_P,r_M)}{\textup{Var}(r_M)}" title="\beta_P = \frac{\textup{Cov}(r_P,r_M)}{\textup{Var}(r_M)}" /></a>

    It is a **forecast** of the future, a **forward-looking** concept.

- Historical/realized beta is a reasonable forecast of the beta.

    <a href="https://www.codecogs.com/eqnedit.php?latex=r_P(t)=\alpha_P&plus;\beta_P\cdot&space;r_M(t)&plus;\epsilon&space;_P(t)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?r_P(t)=\alpha_P&plus;\beta_P\cdot&space;r_M(t)&plus;\epsilon&space;_P(t)" title="r_P(t)=\alpha_P+\beta_P\cdot r_M(t)+\epsilon _P(t)" /></a>

    - Betas tends to regress toward the mean.
    - Forecasts of betas based on the fundamental attributes of the company is much better forecasts of future betas than its historical returns.

    ***HOMEWORK ：比较A股股票的 realized beta 与 predited beta.***


- Beta is a way of separating risk and return into two parts.
    - excess return = market component + residual component

        <a href="https://www.codecogs.com/eqnedit.php?latex=r_P=\beta_Pr_M&plus;\theta_P" target="_blank"><img src="https://latex.codecogs.com/gif.latex?r_P=\beta_Pr_M&plus;\theta_P" title="r_P=\beta_Pr_M+\theta_P" /></a>
    
    - residual return 
    <a href="https://www.codecogs.com/eqnedit.php?latex=\theta_P" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\theta_P" title="\theta_P" /></a>
    is uncorrelated with the market return
    <a href="https://www.codecogs.com/eqnedit.php?latex=r_M" target="_blank"><img src="https://latex.codecogs.com/gif.latex?r_M" title="r_M" /></a>
    .

    - variance of portfolio decomposition:

        <a href="https://www.codecogs.com/eqnedit.php?latex=\sigma_P^2=\beta_P^2\sigma_M^2&plus;\omega_P^2" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\sigma_P^2=\beta_P^2\sigma_M^2&plus;\omega_P^2" title="\sigma_P^2=\beta_P^2\sigma_M^2+\omega_P^2" /></a>

## The CAPM

- Assumption:
    - All investors have the same expectations.
    - They differ only in their *tolerance for risk*.

- Main conclusions:
    - Under the CAPM, the **expected residual return** on any stock or portfolio is zero. 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\textup{E}\[\theta_P\]=0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\textup{E}\[\theta_P\]=0" title="\textup{E}\[\theta_P\]=0" /></a>


    - **Expected excess returns** are proportional to the stock's (or portfolio's) beta.

        <a href="https://www.codecogs.com/eqnedit.php?latex=\textup{E}\[r_P\]=\mu_P=\beta_P\textup{E}\[r_M\]=\beta_P\mu_M" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\textup{E}\[r_P\]=\mu_P=\beta_P\textup{E}\[r_M\]=\beta_P\mu_M" title="\textup{E}\[r_P\]=\mu_P=\beta_P\textup{E}\[r_M\]=\beta_P\mu_M" /></a>

## The CAPM is Sensible

- Investors are compensated for taking necessary risks, not for unnecessary risks.
    - Market risk is in escapable.
    - All investors can avoid residual risk.

- Investors who don't think they have superior information should hold the market portfolio.

## The CAPM and Efficient Markets Theory

- Three strengths: weak, semistrong, strong.

## Relevance for Active Managers

- CAPM is based on not quite accurate assumptions.

- There is no need to forecast the expected excess market return if you control beta.

- The manager can focus on forecasting residual returns.

- CAPM helps the active manager to 
    - avoid the risk of **market timing**
    - focus on **residual returns** that have a consensus expectation of zero.

## Technical Appendix

### Mathematical Notation

Argument Type | Notaion | Example
:-:|:-:|:-:
scalar | plain text | <a href="https://www.codecogs.com/eqnedit.php?latex=a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a" title="a" /></a>
vector | bold lowercase letter | <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}" title="\mathbf{h}" /></a>
matrix | bold uppercase letter | <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{V}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{V}" title="\mathbf{V}" /></a>