graph TD
  subgraph Microsoft Azure
    A1[Desarrollador] --> |Push Code| A2[Azure Repos]
    A2 --> |Trigger Pipeline| A3[Azure Pipelines]
    A3 --> |Build and Test| A4[Build and Test Stage]
    A4 --> |Build Docker Image| A5[Docker Build Stage]
    A5 --> |Push to Container Registry| A6[Google Container Registry]
  end
  
  subgraph Google Cloud Platform
    B1[Cloud Source Repositories] --> |Pull Code| A2
    A6 --> |Deploy to GKE| B2[GKE Cluster]
    B2 --> |Run| B3[Go Application]
  end
  
  style A1 fill:#f9f,stroke:#333,stroke-width:4px
  style A2 fill:#bbf,stroke:#333,stroke-width:2px
  style A3 fill:#ff9,stroke:#333,stroke-width:2px
  style A4 fill:#bfb,stroke:#333,stroke-width:2px
  style A5 fill:#9f9,stroke:#333,stroke-width:2px
  style A6 fill:#f99,stroke:#333,stroke-width:2px
  style B1 fill:#bbf,stroke:#333,stroke-width:2px
  style B2 fill:#ff9,stroke:#333,stroke-width:2px
  style B3 fill:#bfb,stroke:#333,stroke-width:2px
